/* -------------------------------------------
Name:Sang Jun Park
Student number:112293170
Email:sjpark24@senecacollege.ca
Section:IPC144SXX
Date:Jan.2
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include "string.h"

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void)
{
	int num;
	char nl = 0;
	do {
		scanf("%d%c", &num, &nl);
		if (nl != '\n') {
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			clearKeyboard();
		}
	} while (nl != '\n');
	return num;
}

// getIntInRange:
int getIntInRange(int min, int max)
{
	int value;
	do {
		value = getInt();
		if (value < min || value > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}
	} while (value < min || value > max);
	return value;
}

// yes:
int yes(void)
{
	char ch;
	char nl = 0;
	do {
		scanf("%c%c", &ch, &nl);
		if (!(ch == 'y' || ch == 'Y' || ch == 'N' || ch == 'n') || nl != '\n') {
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			if (nl != '\n') clearKeyboard();
		}
	} while (!(ch == 'y' || ch == 'Y' || ch == 'N' || ch == 'n') || nl != '\n');
	if (nl != '\n') clearKeyboard();
	return ch == 'y' || ch == 'Y';
}

// menu:
int menu(void)
{
	int selection;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");
	selection = getIntInRange(0, 6);
	return selection;
}

// ContactManagerSystem:
void ContactManagerSystem(void)
{
	int selection;
	int i = 0;
	struct Contact c[MAXCONTACTS] = { { { "Rick", { '\0' }, "Grimes" }, { 11, "Trailer Park", 0, "A7A 2J2", "King City" }, { "4161112222", "4162223333", "4163334444" } }, 
	{ { "Maggie", "R.", "Greene" },{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },{ "9051112222", "9052223333", "9053334444" } },
	{ { "Morgan", "A.", "Jones" },{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },{ "7051112222", "7052223333", "7053334444" } }, 
	{ { "Sasha",{ '\0' }, "Williams" },{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },{ "9052223333", "9052223333", "9054445555" } }, };
	while (i != 1) {
		selection = menu();
		switch (selection) {
		case 1:
			displayContacts(c, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 2:
			addContact(c, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 3:
			updateContact(c, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 4:
			deleteContact(c, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 5:
			searchContacts(c, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		default:
			printf("\nExit the program? (Y)es/(N)o: ");
			if (yes()) {
				printf("\nContact Management System: terminated\n");
				i++;
			}
			else {
				printf("\n");
				i = 0;
			}
			break;
		}
	}
}

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char *telNum)
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}


// findContactIndex:
int findContactIndex(const struct Contact *c, int fci, const char *p)
{
	int i;
	int j = -1;
	for (i = 0; i < fci; i++) {
		if (strcmp(c[i].numbers.cell, p) == 0) {
			j = i;
			break;
		}
	}
	return j;
}

// displayContactHeader
void displayContactHeader(void) 
{
	int i;
	printf("\n+");
	for (i = 0; i < 77; i++) { 
		printf("-"); 
	}
	printf("+\n");
	printf("|");
	for (i = 0; i < 30; i++) { 
		printf(" "); 
	}
	printf("Contacts Listing");
	for (i = 0; i < 31; i++) { 
		printf(" "); 
	}
	printf("|\n");
	printf("+");
	for (i = 0; i < 77; i++) {
		printf("-"); 
	}
	printf("+\n");
}

// displayContactFooter
void displayContactFooter(int dcf) {
	int i;
	printf("+");
	for (i = 0; i < 77; i++) 
	{ printf("-"); }
	printf("+\n");
	printf("Total contacts: %d\n\n", dcf);
}

// displayContact:
void displayContact(const struct Contact* c) 
{
	printf(" %s", c->name.firstName);
	if (c->name.middleInitial[0] != '\0') 
	{
		printf(" %s", c->name.middleInitial);
	}
	printf(" %s\n", c->name.lastName);
		printf("    C: %-10s   H: %-10s   B: %-10s\n", c->numbers.cell, c->numbers.home, c->numbers.business);
		printf("       %d %s,", c->address.streetNumber, c->address.street);
		if (c->address.apartmentNumber > 0) 
		{
			printf(" Apt# %d,", c->address.apartmentNumber);
		}
		printf(" %s, %s\n", c->address.city, c->address.postalCode);
	}

// displayContacts:
void displayContacts(const struct Contact* c, int discs) 
{
	int i;
	int j = 0;
	displayContactHeader();
	for (i = 0; i < discs; i++) 
	{
		if (c[i].numbers.cell[0] != '\0') 
		{
			displayContact(&c[i]);
			j++;
		}
	}
	displayContactFooter(j);
}

// searchContacts:
void searchContacts(const struct Contact* c, int sc) 
{
	int i;
	char p[11];
	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(p);
	printf("\n");
	i = findContactIndex(c, sc, p);
		if (i != -1) 
		{
			displayContact(&c[i]);
			printf("\n");
		}else{
			printf("*** Contact NOT FOUND ***\n");
	}
}

// addContact:
void addContact(struct Contact* c, int ac) 
{
	int i;
	int j = 0;
	printf("\n");
	for (i = 0; i < ac; i++) 
	{
		if (c[i].numbers.cell[0] == '\0') 
		{
			j++;
			getContact(&c[i]);
			printf("--- New contact added! ---\n");
			break;
		}
	}
			if (j == 0) 
			{ 
				printf("*** ERROR: The contact list is full! ***\n"); 
			}
	}


	// updateContact:
void updateContact(struct Contact* c, int uc) 
{
	int i;
	char p[11];
	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(p);
	i = findContactIndex(c, uc, p);
	if (i == -1) 
	{
		printf("*** Contact NOT FOUND ***\n");
	}else {
		printf("\nContact found:\n");
		displayContact(&c[i]);
		printf("\nDo you want to update the name? (y or n): ");
		if (yes()) 
		{
			getName(&c[i].name);
		}
		printf("Do you want to update the address? (y or n): ");
		if (yes()) 
		{
			getAddress(&c[i].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		if (yes()) 
		{
			getNumbers(&c[i].numbers);
		}
		printf("--- Contact Updated! ---\n");
	}
}
// deleteContact:
void deleteContact(struct Contact* c, int delc) 
{
	int i;
	char p[11];
	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(p);
	printf("\n");
	i = findContactIndex(c, delc, p);
	if (i == -1) 
	{
		printf("*** Contact NOT FOUND ***\n");
	}else {
		printf("Contact found:\n");
		displayContact(&c[i]);
		printf("\nCONFIRM: Delete this contact? (y or n): ");
		if (yes()) 
		{
			c[i].numbers.cell[0] = '\0';
			printf("--- Contact deleted! ---\n");
		}
	}
}

// sortContacts:
void sortContacts(struct Contact* c, int soc) {
	printf("<<< Feature to sort is unavailable >>");
	printf("--- Contacts sorted! ---");
}


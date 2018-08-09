/* -------------------------------------------
Name:           
Student number: 
Email:          
Section:        
Date:           
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt(void)
{
	int n;
	char nl = 0;
	do {
		scanf("%d%c", &n, &nl);
		if (nl != '\n') {
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			clearKeyboard();
		}
	} while (nl != '\n');
	return n;
}

// getIntInRange function definition goes here:
int getIntInRange(int min, int max)
{
	int value;
	do {
		value = getInt();
		if (value < min || value > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ",min ,max);
		}
	} while (value < min || value > max);
	return value;
}

// yes function definition goes here:
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


// menu function definition goes here:
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

// ContactManagerSystem function definition goes here:
void ContactManagerSystem(void)
{
	int selection;
	int i = 0;
	while (i != 1) {
		selection = menu();
		switch (selection) {
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
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

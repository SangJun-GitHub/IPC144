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

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"



// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:
#include "contactHelpers.h"
int i;
char answer;

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

// getName:
void getName(struct Name *n) {
	printf("Please enter the contact's first name: ");
	scanf("%s", n->firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%s", n->middleInitial);
		clearKeyboard();
	}
	printf("Please enter the contact's last name: ");
	scanf("%s", n->lastName);
	clearKeyboard();
}


// getAddress:
void getAddress(struct Address *a) {
	printf("Please enter the contact's street number: ");
	a->streetNumber = getInt();
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", a->street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's apartment number: ");
		a->apartmentNumber = getInt();
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", a->postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf("%s", a->city);
	clearKeyboard();
}


// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers *p) {
	printf("Please enter the contact's cell phone number: ");
	scanf("%s", p->cell);
	clearKeyboard();
	printf("Do you want to enter a home phone number? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's home phone number: ");
		scanf("%s", p->home);
		clearKeyboard();
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	if (yes()) {
		printf("Please enter the contact's business phone number: ");
		scanf("%s", p->business);
		clearKeyboard();
	}
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+

// getContact
void getContact(struct Contact *c) {
	getName(&c->name);
	getAddress(&c->address);
	getNumbers(&c->numbers);
}
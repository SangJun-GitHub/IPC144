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

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:
void getName(struct Name *n) 
{
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", n->firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if (yes()) 
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", n->middleInitial);
		clearKeyboard();
	}
	printf("Please enter the contact's last name: ");
	scanf("%35[^\n]", n->lastName);
	clearKeyboard();
}
// getAddress:
void getAddress(struct Address *a)
{
	printf("Please enter the contact's street number: ");
	a->streetNumber = getInt();
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", a->street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	if (yes()) 
	{
		printf("Please enter the contact's apartment number: ");
		a->apartmentNumber = getInt();
	}else{
		a->apartmentNumber = '\0';
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", a->postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]", a->city);
	clearKeyboard();
}
// getNumbers:
void getNumbers(struct Numbers *p) 
{
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(p->cell);

	printf("Do you want to enter a home phone number? (y or n): ");
	if (yes()) 
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(p->home);

	}else{
		p->home[0] = '\0'; 
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	if (yes()) 
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(p->business);

	}else{
		p->business[0] = '\0';
	}
}
// getContact:
void getContact(struct Contact *c) 
{
	getName(&c->name);
	getAddress(&c->address);
	getNumbers(&c->numbers);
}
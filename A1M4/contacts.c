/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"
int i;
char answer;

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name *n) {
	printf("Please enter the contact's first name: ");
	scanf("%s", n->firstName);
	getchar();
	i = 0;
	do {
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's middle initial(s): ");
				scanf("%s", n->middleInitial);
			}
			i++;
			getchar();
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	printf("Please enter the contact's last name: ");
	scanf("%s", n->lastName);
	getchar();
}

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *a) {
	printf("Please enter the contact's street number: ");
	scanf("%d", &a->streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%s", a->street);
	getchar();
	i = 0;
	do {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y') {
				printf("Please enter the contact's apartment number: ");
				scanf("%d", &a->apartmentNumber);
			}
			i++;
			getchar();
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", a->postalCode);

	printf("Please enter the contact's city: ");
	scanf("%s", a->city);
	getchar();
}


// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *p) {
	i = 0;
	do {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y') {
				printf("Please enter the contact's cell phone number: ");
				scanf("%s", p->cell);
			}
			i++;
			getchar();
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	i = 0;
	do {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's home phone number: ");
				scanf("%s", p->home);
			}
			i++;
			getchar();
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1); 
	i = 0;
	do {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's business phone number: ");
				scanf("%s", p->business);
			}
			i++;
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	getchar();
}
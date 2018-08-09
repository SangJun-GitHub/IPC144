/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main(void)
{
	// Declare variables here:
	struct Name name;
	struct Address address;
	struct Numbers number;
	int i;
	char answer;



	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%s", name.firstName);
	getchar();
	i = 0;
	do {
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's middle initial(s): ");
				scanf("%s", name.middleInitial);	
			}
			i++;
			getchar();
		}
		else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	ques[0] = answer;
	printf("Please enter the contact's last name: ");
	scanf("%s", name.lastName);
	getchar();


	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%s", address.street);
	getchar();
	i = 0;
	do {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y') {
				printf("Please enter the contact's apartment number: ");
				scanf("%d", &address.apartmentNumber);
			}
			i++;
			getchar();
		}else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	ques[1] = answer;
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", address.postalCode);
	
	printf("Please enter the contact's city: ");
	scanf("%s", address.city);
	getchar();
	
    // Contact Numbers Input:
	i = 0;
	do {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y'){
				printf("Please enter the contact's cell phone number: ");
				scanf("%s", number.cell);
			}
			i++;
			getchar();
		}else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	}while (i < 1);
	ques[2] = answer;
	i = 0;
	do {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's home phone number: ");
				scanf("%s", number.home);
			}
			i++;
			getchar();
		}else {
			printf("You have entered incorrectly, please try again!!\n");
			getchar();
		}
	} while (i < 1);
	ques[3] = answer;
	i = 0;
	do {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf("%c", &answer);
		if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n') {
			if (answer == 'Y' || answer == 'y')
			{
				printf("Please enter the contact's business phone number: ");
				scanf("%s", number.business);
			}
			i++;
		}else{
			printf("You have entered incorrectly, please try again!!\n");
		getchar();
		}
	} while (i < 1);
	ques[4] = answer;
	getchar();
	printf("\n");

    // Display Contact Summary Details
	printf("Contact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name.firstName);
	if (ques[0] == 'Y' || ques[0] == 'y') {
		printf("Middle initial(s): %s\n", name.middleInitial);
	}
	printf("Last name: %s\n\n", name.lastName);
	printf("Address Details\n");
	printf("Street number: %d\n", address.streetNumber);
	printf("Street name: %s\n", address.street);
	if (ques[1] == 'Y' || ques[1] == 'y') {
		printf("Apartment: %d\n", address.apartmentNumber);
	}
	printf("Postal code: %s\n", address.postalCode);
	printf("City: %s\n\n", address.city);
	
	printf("Phone Numbers:\n");
	
	if (ques[2] == 'Y' || ques[2] == 'y') {
		printf("Cell phone number: %s\n", number.cell);
	}
	if (ques[3] == 'Y' || ques[3] == 'y') {
		printf("Home phone number: %s\n", number.home);
	}
	if (ques[4] == 'Y' || ques[4] == 'y') {
		printf("Business phone number: %s\n", number.business);
	}

    // Display Completion Message
	printf("\nStructure test for Name, Address, and Numbers Done!\n");


    return 0;
}

/*  SAMPLE OUTPUT:
    
Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888

Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song

Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto

Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888

Structure test for Name, Address, and Numbers Done!
*/

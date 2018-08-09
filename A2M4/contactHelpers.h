/* ------------------------------------------------------------------
Name:Sang Jun Park
Student number:112293170
Email:sjpark24@senecacollege.ca
Section:IPC144SXX
Date:Jan.2
---------------------------------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetative tasks.
---------------------------------------------------------------------*/


// Hint:  This header file now has functions with parameters referring to 
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Clear the standard input buffer
// clearKeyboard:
void clearKeyboard(void);

// pause:
void pause(void);

// getInt:
int getInt(void);

// getIntInRange:
int getIntInRange(int, int);

// yes:
int yes(void);

// menu:
int menu(void);

// ContactManagerSystem:
void ContactManagerSystem(void);

// Generic function to get a ten-digit phone number:
// getTenDigitPhone:
void getTenDigitPhone(char* tenNum);

// findContactIndex:
int findContactIndex(const struct Contact* c, int fci, const char *p);

// displayContactHeader:
void displayContactHeader(void);

// displayContactFooter:
void displayContactFooter(int dcf);

// displayContact:
void displayContact(const struct Contact* c);

// displayContacts:
void displayContacts(const struct Contact* c, int discs);

// searchContacts:
void searchContacts(const struct Contact* c, int sc);

// addContact:
void addContact(struct Contact* c, int ac);

// updateContact:
void updateContact(struct Contact* c, int uc);

// deleteContact:
void deleteContact(struct Contact* c, int delc);

// sortContacts:
void sortContacts(struct Contact* c, int soc);

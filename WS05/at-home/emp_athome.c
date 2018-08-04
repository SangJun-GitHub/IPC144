/*
Name:
Student number:
Email:
Workshop:
Section:
Date:
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 4
// Define Number of Employees "SIZE" to be 2

struct employee {
	int id;
	int age;
	double salary;
};
// Declare Struct Employee 


/* main program */
int main(void) {

	int option = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 0;
	int idch;
	int rm;
	double newsal;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct employee emp[SIZE] = { { 0, 0, 0.0 } };

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:	// Exit the program

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (i = 0; i < num; i++)
			{
				printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");
			if (num < SIZE) {
				printf("Enter Employee ID: ");
				scanf("%d", &emp[num].id);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[num].age);
				printf("Enter Employee Salary: ");
				scanf("%lF", &emp[num].salary);
				printf("\n");
				num++;
				// Check for limits on the array and add employee 
				// data accordingly. 
			}
			else
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			break;
		case 3:

			printf("Update Employee Information\n");
			printf("===========================\n");
			printf("Enter Employee ID: ");
			scanf("%d", &idch);
			do {
				k++;
				if (emp[k].id == idch)
				{
					printf("The current salary is %0.2lf\n", emp[k].salary);
				}
			} while (k > SIZE);
			printf("Enter Employee New Salary: ");
			scanf("%lf", &newsal);
			emp[k].salary = newsal;
			k = 0;
			printf("\n");

			break;
		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			printf("Enter Employee ID: ");
			scanf("%d", &rm);

			do 
			{
				h++;
				if (emp[h].id == rm)
				{
					num--;
					for ( j = h; j < num; j++)
					{
						emp[j].id = emp[j + 1].id;
						emp[j].age = emp[j + 1].age;
						emp[j].salary = emp[j + 1].salary;
					}
					emp[num].id = 0;
					emp[num].age = 0;
					emp[num].salary = 0.0;
				}
			}while (h > SIZE);
			h = 0;

			printf("Employee %d will be removed\n\n",rm);

			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	printf("Exiting Employee Data Program. Good Bye!!!\n");
	return 0;
}

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements







// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 113
Enter Employee Age: 53
Enter Employee Salary: 120345.78

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 114
Enter Employee Age: 25
Enter Employee Salary: 46780

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 112
The current salary is 65000.00
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   99999.99
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 112
Employee 112 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/
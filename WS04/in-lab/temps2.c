// Name: Sang Jun Park
// Student Number: 112293170
// Email: sjpark24@myseneca.ca
// Section: IPC144SXXX
// Workshop: 4_in_lab

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include<stdio.h>
int main() 
{
	int dhigh[10];
	int dlow[10];
	int day;
	int i;
	int j;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &day);
	printf("\n");
	while (day > 10 || day < 3)
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &day);
		printf("\n");
	}
	
	for (i = 0; i < day; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &dhigh[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &dlow[i]);
	}

	printf("\nDay  Hi  Low\n");
	for (j = 0; j < day; j++)
	{
		printf("%d    %d    %d\n", j + 1, dhigh[j], dlow[j]);
	}
	return 0;
}
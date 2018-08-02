/*
Name:      <Sang Jun Park>
Student#:  <112293170>
Section:   <IPC144SXX>
*/

// Start your code below:
#include <stdio.h>

int main()
{
	float amount;
	float h2;
	float change;
	float change2;

	int loonies;
	int h1;
	int qrt;

	printf("Please enter the amount to be paid: $");  //8.68
	scanf("%f", &amount);  //8.68
	h1 = amount * 100;  //868 = 8.68 * 100
	loonies = h1 / 100;  //8 = 868 / 100

	printf("Loonies required: %d,", loonies);  //8
	loonies = loonies * 100;  //800 = 8 * 100
	h2 = h1 - loonies;  //68 = 868 - 800
	change = h2 / 100;  //0.68 = 68 / 100

	printf(" balance owing $%.2f\n", change);  //0.68
	change = change * 100;  //68 = 0.68 * 100
	qrt = change;  // 68
	qrt = qrt / 25;  //2 = 68 / 25

	printf("Quarters required: %d, ", qrt); qrt = qrt * 25;  // 50 = 2 * 25
	change2 = change - qrt;  //18 = 68 - 50
	change2 = change2 / 100;  //0.18 = 18 / 100
	printf("balance owing $%.2f\n", change2); // 0.18
	return 0;
}
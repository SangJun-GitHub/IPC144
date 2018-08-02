// Name: Sang Jun Park
// Student Number: 112293170
// Email: sjpark24@myseneca.ca
// Section: IPC144SXX
// Workshop: 3_in_lab
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 3

int main(void)
{
	printf("---=== IPC Temperature Analyzer ===---");

	// create and initialize the 6 variables for :

	// low and high temp for days.
	int highTemp;
	int lowTemp;

	// day counter
	int nday;

	// total high and total low
	float totalHigh = 0;
	float totalLow = 0;

	// average
	float average = 0.2f;

	//repeat NUMS times
	for (nday = 1; nday <= NUMS; nday++)
	{
		// prompt the user to enter tempratures
		// scan the tempratures
		printf("\nEnter the high value for day %d: ", nday);
		scanf("%d", &highTemp);

		printf("\nEnter the low value for day %d: ", nday);
		scanf("%d", &lowTemp);

		// while the temps are incorrect
		while ((highTemp < lowTemp) || (highTemp > 40) || (lowTemp < -40))
		{
			// print error messge
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			// prompt the user to enter tempratures
			// scan the tempratures
			printf("\nEnter the high value for day %d: ", nday);
			scanf("%d", &highTemp);

			printf("\nEnter the low value for day %d: ", nday);
			scanf("%d", &lowTemp);
		}

		//add low to total low temps
		totalLow += lowTemp;

		// add high to total high temp
		totalHigh += highTemp;
	}

	//calculate the average (tothigh+totlow)/(NUMS*2)
	average = (totalHigh + totalLow) / (NUMS * 2);

	//print results
	printf("\n");
	printf("The average (mean) temperature was: %.2f", average);
	printf("\n");
	return 0;
}

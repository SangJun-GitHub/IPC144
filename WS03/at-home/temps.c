// Name: Sang Jun Park
// Student Number: 112293170
// Email: sjpark24@myseneca.ca
// Section: IPC144SXX
// Workshop: 3_in_lab

#include <stdio.h>
#define NUMS 4

int main(void)
{
	printf("---=== IPC Temperature Analyzer ===---");

	int highTemp;
	int lowTemp;
	int nday;
	int highest = 0;
	int lowest = 0;
	int highestday;
	int lowestday;
	float totalHigh = 0;
	float totalLow = 0;
	float average = 0.2f;

	for (nday = 1; nday <= NUMS; nday++)
	{
		printf("\nEnter the high value for day %d: ", nday);
		scanf("%d", &highTemp);

		printf("\nEnter the low value for day %d: ", nday);
		scanf("%d", &lowTemp);

		while ((highTemp < lowTemp) || (highTemp > 40) || (lowTemp < -40))
		{

			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");

			printf("\nEnter the high value for day %d: ", nday);
			scanf("%d", &highTemp);

			printf("\nEnter the low value for day %d: ", nday);
			scanf("%d", &lowTemp);

		}
		if (highTemp > highest)
		{
			highest = highTemp;
			highestday = nday;
		}
		if (lowTemp < lowest)
		{
			lowest = lowTemp;
			lowestday = nday;
		}

		totalLow += lowTemp;
		totalHigh += highTemp;
	}

	average = (totalHigh + totalLow) / (NUMS * 2);

	printf("\n");
	printf("The average (mean) temperature was: %.2f\n", average);
	printf("The highest temperature was %d, on day %d\n", highest ,highestday);
	printf("The lowest temperature was %d, on day %d\n", lowest ,lowestday);
	return 0;
}
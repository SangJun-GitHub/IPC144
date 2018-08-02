/*
     Name:      <Sang Jun Park> 
     Student#:  <112293170>
     Section:   <IPC144SXX>
*/

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>

int main()
{
	float amount;
	float gst;
	float bo;
	float ch1;
	float ch2;
	float ch3;
	float ch4;
	float ch5;

	int loonies;
	int qrt;
	int di;
	int ni;
	int pe;

	printf("Please enter the amount to be paid: $"); //8.68
	scanf("%f", &amount); //8.68
	gst = amount * 0.13 + 0.005; //1.13 = 8.68 * 0.13 + 0.005
	
	printf("GST: %.2f\n", gst); //1.13
	bo = amount + gst;	// 9.81 = 8.68 + 1.13
	
	printf("Balance owing: $%.2f\n", bo); //9.81
	bo = bo * 100; //981 = 9.81 * 100
	loonies = bo / 100; //9 = 981 / 100

	printf("Loonies required: %d,", loonies); //9
	loonies = loonies * 100; //900 = 9 * 100
	ch1 = bo - loonies; //81 = 981 - 900
	ch1 = ch1 / 100; //0.81 = 81 / 100

	printf(" balance owing $%.2f\n", ch1); //0.81
	ch1 = ch1 * 100; //81 = 0.81 * 100
	qrt = ch1; //81 = 81
	qrt = qrt / 25; //3 = 81 / 25

	printf("Quarters required: %d, ", qrt); //3
	qrt = qrt * 25; //75 = 3 * 25
	ch2 = ch1 - qrt; //6 = 81 - 75
	ch2 = ch2 / 100; //0.06 = 6 / 100

	printf("balance owing $%.2f\n", ch2); //0.06
	ch2 = ch2 * 100; //6 = 0.06 * 100
	di = ch2; //6 = 6
	di = di / 10; //0 = 6 / 10

	printf("Dimes required: %d, ", di); //0
	di = di * 10; //0 = 0 /100
	ch3 = ch2 - di; //6 = 6 - 0
	ch3 = ch3 / 100; //0.06 = 6 / 100

	printf("balance owing $%.2f\n", ch3); //0.06
	ch3 = ch3 * 100; //6 = 0.06 * 100
	ni = ch3; //6 = 6
	ni = ni / 5; //1 = 6 / 5

	printf("Nickels required: %d, ", ni); //1
	ni = ni * 5; //5 = 1 * 5
	ch4 = ch3 - ni; //1 = 6 - 5
	ch4 = ch4 / 100;  //0.01 = 1 / 100

	printf("balance owing $%.2f\n", ch4); //0.01
	ch4 = ch4 * 100; //1 = 0.01 * 100
	pe = ch4 + 0.5; // 1 = 1
	pe = pe / 1; // 1 = 1 / 1

	printf("Pennies required: %d, ", pe); //1
	pe = pe * 1; //1 = 1 * 1
	ch5 = ch4 - pe; //0 = 1 - 1
	ch5 = ch5 / 100; //0.00 = 0 / 100

	printf("balance owing $%.2f\n", ch5); // 0.00

	return 0;
}
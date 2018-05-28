//Exercise3 Prints the interger to 3 decimal places of two user's input numbers.
#include <stdio.h>

int main(void)
{
	float userNum1; //stores user's first number
	float userNum2; //stores the user's second number
	float quotent; // users's first number / user's second number

	printf("Enter your first number: ");
	scanf_s("%i", &userNum1);
	printf("Enter  your second number: ");
	scanf_s("%i", &userNum2);
	quotent = userNum1 / userNum2;

	if (userNum2 > 0) {//as long as the second number is larger than 0, it will print the quotent or else it will print divide by zero error.
		printf("%f divided by %f = %0.3f. \n", userNum1, userNum2, quotent);
	}
	else {
		printf("%f can not be divided by 0. Divide by zero error. \n", userNum1);
	}
	getchar();
	getchar();
	return 0;
}
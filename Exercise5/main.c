///Exercise 5 Prints a negative and nonnegative number in reverse order off digits


#include <stdio.h>

int main(void) {
	int userNum; //stores the users Number
	int negativeNum; //if the user gives a negative number, negativenum whill change the inital num to a positive 
	int reversed = 0; //stores the reverse order of digits, initally is 0.
	char negativesign = '-'; //stores the - char to print after the reverse order of a negative number

	printf("Enter your number or negative number: \n");
	scanf_s("%i", &userNum);

	if (userNum >= 0) { //as long as user's number is a postive number the reverse digits will be printed 
		do {
			reversed = userNum % 10;
			printf("%i", reversed);
			userNum = userNum / 10;
		} 
		while (userNum != 0);
		printf("\n");
	}

	else { //when the number is negative it whill convert the number to postive, print the reverse, and than print the negative sign at the end
		negativeNum = userNum * -1;
		do {
			reversed = negativeNum % 10;
			printf("%i", reversed);
			negativeNum = negativeNum / 10;
		}

		while (negativeNum != 0);
		printf("%c", negativesign);
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
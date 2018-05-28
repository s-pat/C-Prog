//Exercise2 Writes if two user entered numbers can be evenly divided with no remainders.

#include <stdio.h>

int main(void)
{
	int userNum1; // stores users first number
	int userNum2; // stores users second number
	int quotent; // user's first number / user's second number is stored here

	printf("Enter your first number: ");
	scanf_s("%i", &userNum1);
	printf("Enter  your second number: ");
	scanf_s("%i", &userNum2);
	quotent = userNum1 / userNum2;
	if (userNum1 % userNum2 == 0) {//indicates if numbers can be divided evenly or not
		printf("%i can be divided by %i evenly. \n", userNum1, userNum2);

		printf("%i divided by %i = %i", userNum1, userNum2, quotent);
	}
	else {
		printf("%i can not be divided by %i evenly,\n", userNum1, userNum2);
		printf("%i divided by %i = %i", userNum1, userNum2, quotent);
	}
	getchar();
	getchar();
	return 0;
}
//Exercise4 Prints result of user generated number and operation.

#include <stdio.h>

int main(void)
{
	float userNum; //stores users number
	float result; //stores the result/value of user numbers and any operations
	char operator; //stores the users operator

	printf("Please enter a number for the calculation a and operator: ");
	scanf_s("%f %c", &userNum, &operator);

	while (operator != 'e' || operator != 'E'){ //when the users operator is one of the cases it will run the operator assigned too it, and than stop till another one is submited by the user
		switch (operator) { //when the users operator is one of the cases it will run the operator assigned too it, and than stop till another one is submited by the user
		case 'S':
		case 's':
			result = userNum;
			break;

		case '+':
			result += userNum;
			break;

		case'-':
			result -= userNum;
			break;

		case '*':
			result *= userNum;
			break;

		case '/':
			if (userNum == 0){ //if user's number is zero than it can not be devided by any result and will print the zero error.
				printf("Division by zero error.\n");
			}
			else{ //when user's number is not zero it will divide current result by the userNum and set result to that.
				result /= userNum;
			}
			break;

		case 'E':
		case 'e':
			result += userNum;
			printf("Results in  = %.3f\n", result);
			break;

		default:
			printf("Incorrect operator\n");
			break;
		}// end of switch
		printf("Results in  %.3f\n", result);
		scanf_s("%f %c", &userNum, &operator);
	}// end of while

	getchar();
	getchar();
	return 0;
}
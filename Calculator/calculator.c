#include <stdio.h>
int main(){
	double number1 = 0.0;
	double number2 = 0.0;
	char operation = 0; // only-> +, -, *, /, %
	printf("\n Enter the calculation\n");
	scanf("%lf%c%lf", &number1,&operation,&number2);

	switch(operation){
		case '+':
			printf("=%lf\n",number1+number2);
			break;

		case '-':
			printf("=%lf\n",number1-number2);
			break;

		case '*':
			printf("=%lf\n",number1*number2);
			break;

		case '/':
			if(number2 == 0)
				printf("\n\aDivvision by zero error!\n");
			else
				printf("=%lf\n", number1/number2);

		case '%':
			if(number2 == 0)
				printf("\n\aDivvision by zero error!\n");
			else
				printf("=%ld\n", (long)number1%(long)number2);

		default:
			printf("\naDivision by zero error!\n");
			break;
    }
	return 0;
}
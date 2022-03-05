#include <stdio.h>

int main(){
	
	int number1, number2;
	
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	
	if (number1 == number2){
		printf("Result: %d = %d\n", number1, number2);
	}
	
	else if (number1 > number2){
		printf("%d is an odd number.\n",  number);
	}
	
	else {
		printf("Result: %d < %d\n",number1, number2);
	}
	return 0;
}
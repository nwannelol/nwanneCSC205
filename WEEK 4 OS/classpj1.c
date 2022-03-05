#include <stdio.h>
int main(){
	
	int age;
	printf("Enter your age : ");
	scanf("%d", &age);
	
	if(age >= 18)
		printf("You can vote");
	else
		printf("You cannot vote");
	return 0;


    float csc201, csc205, sta205;
    printf("Input score for csc201: %f\n");
    scanf("%f", &csc201);
    printf("Input score for csc205: %f\n");
    scanf("%f", &csc205);
    printf("Input score for sta205: %f\n");
    scanf("%f", &sta205); 

    float total = csc201+csc205+sta205;
    float avg = total/2;
    
    printf("total is: %f", total);
    

}


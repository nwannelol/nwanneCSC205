#include <stdio.h>

int main(){
	
	float csc_201, csc_205, sta_205, overall, total, average;
	printf("What are the results scored over : ");
	scanf("%f", &overall);
	printf("Enter score for CSC_201 : ");
	scanf("%f", &csc_201);
	printf("Enter score for CSC_205 : ");
	scanf("%f", &csc_205);
	printf("Enter score for STA_205 : ");
	scanf("%f", &sta_205);
	
	int score = overall*3;
	total = csc_201 + csc_205 + sta_205; 
	printf("Total Score is: %f / %f \n", total, overall*3);
	average = (csc_201 + csc_205 + sta_205)/3;
	printf("Average Score is: %f \n", average);
	        
	printf("Percentage for CSC_201 : %f %% \n", (csc_201/overall)*100);
	printf("Percentage for CSC_205 : %f %% \n", (csc_205/overall)*100);
	printf("Percentage for STA_205 : %f %% \n", (sta_205/overall)*100);
	                                  
	return 0;
}
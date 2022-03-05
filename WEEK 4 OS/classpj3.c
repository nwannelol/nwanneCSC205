#include <stdio.h>

int main()
{
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char input;

	
	printf("Enter a character between A to J : \n");
	scanf("%c", &input);
	input = toupper(input);

	for(int i =0; i<6; i++){
		if(input == alphabet[i]){
			printf("The next 6 characters are ");
				for(int j = 0; j<6; j++){
					printf("%c  ", alphabet[i+j]);
			}
		}
		
	}
		
	return 0;
}
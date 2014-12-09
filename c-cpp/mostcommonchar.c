#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	char *test_string = "The doctors were waiting on test results before they exercised the rights he had claimed in a living will.";
	printf("%s\n", test_string);
	//create a 255 element array for the ASCII chars
	int array[255] = {0};
	int i;
	for(i = 0; i < strlen(test_string); i++){
		array[ (int)test_string[i] ]++;
	}
	
	//find the most common character
	int max = array[0];
	int index = 0;
	for(i = 1;test_string[i] != 0; i++){
		if(array[test_string[i]] > max){
			max = array[test_string[i]];
			index = i;
		}
	}
	
	printf("The most common character is \"%c\" and is repeated %i times", test_string[index], max);
	return 0;
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char *reverseString(char * str);

int main(){
	char *str = "Geia sas. Me lene Petro kai ade kai gamisou!"";
	char *reversed, *small;
	reversed = reverseString(str);
	
	small = strtok(reversed, " ");
	while(small){
		printf("%s ", reverseString(small));
		small = strtok(NULL, " ");
	}
	return 0;
}

char * reverseString(char * str){
	char *tmp, *reversed;
	int len = strlen(str);
	tmp = (char*) malloc( len );
	reversed = (char*) malloc( len );
	
	stpcpy(tmp, str);
	
	while( *tmp ){
		tmp++;
	}
	int i;
	for(i = 0; i < len; i++){
		tmp--;
		*reversed = *tmp;
		reversed++;
	}
	for(i = 0; i < len; i++){
		reversed--;
	}
	free(tmp);
	return reversed;
}





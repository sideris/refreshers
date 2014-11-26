#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char  * my_strtok(char *str, char *tokens){
	static char *buffer;
	
	if( str != NULL ) {
		buffer = (char*) malloc( strlen(str) );
        strcpy( buffer, str );
	}else if( buffer == NULL && str == NULL ){
		return NULL;
	}else{
		str = buffer;
	}
	
	int chars = 0, len = strlen(tokens), flag = 0;
	
	while ( *buffer ){
		int i;
		for( i = 0; i < len; i++){
			
			if( *buffer == tokens[i] ){
				//if it's the first  position skip 
				if( chars == 0){
					flag = 1;
					str++;
				}else{
					buffer++;
					str[chars] = '\0';
					return str;
				}
			
			}
		}
		
		if( flag == 0 ) chars ++;
		buffer++;
		flag = 0;
		
	}
	
	buffer = NULL;
    str[chars] = '\0';
	return str;
}


char * strtokk(char *str, char *tokens){
	static char *buffer;
	if( str != NULL ){
		buffer = (char *) malloc( strlen(str) );
		stpcpy( buffer, str );
	}
	else if( buffer == NULL && str == NULL ) return NULL;
	else str = buffer;
	
	
	int chars =0, len = strlen(tokens);
	int flag = 0;
	while ( *buffer  ){
		int i;
		for(i = 0; i < len; i++ ){
			
			if( *buffer == tokens[i] ){
				
				if( chars == 0 ){
					flag = 1;
					str++;
				}else{
					buffer++;
					str[chars] = '\0';
					return str;
				}
				
			}
			
		}
		if(flag == 0) chars++;
		buffer++;
		flag = 0;
	}
	
	buffer = NULL;
	str[chars] = '\0';
	return str;
}

int main(){
	char[] a = "Geia sas. Me lene Petro kai ade kai gamisou!";
	char *s;
	
	int count = 1;
    s = strtokk(a, " ,.-");
	while (s != NULL){
		s = strtokk (NULL, " ,.-");
		count++;
	}
	
	return 0;
}
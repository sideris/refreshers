#include <stdio.h>
#include <string.h>

int main() {
    char * strings[32];
    int index = 0;

    //char string[] = "Geia sas. Me lene Petro kai thelw na me paroun stin Microsoft!";
    char string[] = "Γειά σας. Με λένε Πέτρο και θέλω να δουλέψω στην Microsoft!";

    char * stringp = strtok(string," ");

    while(stringp) {
        strings[index] = stringp;
        index++;
        stringp = strtok(NULL," ");
    }
	int i;
    for(i = index -1; i >= 0; i--) {
        printf("%s ", strings[i]);
    }

    return 0;
}
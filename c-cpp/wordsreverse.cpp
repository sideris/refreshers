#include <iostream>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

int main(){
	string sentence = "Geia sas. Me lene Petro kai thelw na me paroun stin Microsoft!", reversed;
	vector<char*> vec;
	
	char* st = strdup( sentence.c_str() );
	char *s;
	
	s = strtok(st, " ");
	while( s != NULL ){
		vec.push_back(s);
		s = strtok(NULL, " ");
	}
	
	for(vector<char*>::size_type i = vec.size() - 1;  i < (vector<char*>::size_type) - 1; i--) {
		string tmp(vec[i]);
		reversed = reversed + tmp + " ";
	}
	
	cout << reversed;

	return 0;
}
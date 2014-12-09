#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxSubSum(int arr[], int n);

int main(){
	int n =100, array[n], i, randnum; 
	//initialize array
	srand(time(NULL));
	for(i = 0; i < n; i++){
		randnum = rand() % 100 - 50;	
		array[i] = randnum;
	}
	
	printf("Max sum is %i", maxSubSum(array, n) );
}

int maxSubSum(int arr[], int n){
	int maxHere = arr[0], max = arr[0], i;
	for(i = 1; i < n; i++){
		maxHere = arr[i]  > maxHere + arr[i] ? arr[i] :  maxHere + arr[i];
		max = max > maxHere ? max : maxHere;
	}
	return max;
}
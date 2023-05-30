#include<stdio.h>
int sumOfArray(int arr[], int n){
	// base caseq
	if(n == 1 || n == 0)
	return arr[0];
	
	return arr[n-1] +  sumOfArray(arr,n-1);
}

void main(){
	int arr[] = {1,2,3,5};
	int n = sizeof(arr)/sizeof(int);
	printf("Sum of arr is = %d",sumOfArray(arr,n));
}
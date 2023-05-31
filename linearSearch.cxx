#include<stdio.h>
int linearSearch(int arr[], int key, int n){
	
	//base case 
	if(n == 0 && key != arr[n-1])
	return -1;
	
	
	
	//process
	printf("n = %d\n",n);
	if(key == arr[n-1]){
		return n;
	}
	n--;
	
	//recursive statement
	return linearSearch(arr,key,n);
}
void main(){
	int arr[] = {4,2,3};
	int n  = sizeof(arr)/sizeof(int);
	printf("size = %d\n",n);
	int key = 5;
	printf("\npostion of key is = %d",linearSearch(arr,key,n));
}

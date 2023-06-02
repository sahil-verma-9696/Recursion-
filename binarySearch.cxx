#include <stdio.h>
int binarySearch(int arr[], int key, int first, int last)
{
	int mid = (first + last) / 2;

	//base case
	if(first>last )//if key not found
	return -1;
	
	if (key == arr[mid])
		return mid + 1;
	else if (key > arr[mid])
	{
		first = mid + 1;
		return binarySearch(arr, key, first, last);
	}
	else if (key < arr[mid])
	{
		last = mid - 1;
		return binarySearch(arr, key, first, last);
	}
}

void main()
{
	int arr[] = {1, 3, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(int);
	int key = 0;

	printf("postion = %d", binarySearch(arr, key, 0, n - 1));
}
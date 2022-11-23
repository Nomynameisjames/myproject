#include <stdio.h>

//function compares both values of element in an array
int compare(int a, int b)
{
	if (a > b)
	return 1;
	else 
	return -1;
}

// function sorts the element in an array using a call back function 'compare'
// to check if the value of the right element is either less or greater than tha// t of the right, if so it swabs  
void sort(int *Arr, int n, int (*compare)(int, int))
{
	int i, j, temp;
	
	for(i = 0; i < n; i++)
	
		for(j = 0; j < n-1; j++)
		{
			if (compare(Arr[j], Arr[j+1]) > 0) // call back function
			{	temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j+1] = temp;
			}
		}
}

int main()
{
	int i;
	int A[] = {1, -6, 4, 7, 8, -4, 55, 76};
	size_t len;

	// determines the length of an array
	len = sizeof(A) / sizeof(A[0]);
	
	//function call to sort array
	sort(A, len, compare);

	//prints sorted array
	for (i = 0; i <= len - 1; i++)
		printf("%d\n", A[i]);
	return 0;
}
	


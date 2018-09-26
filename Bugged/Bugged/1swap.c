/*
Q1.
Starting with simple,
just print the number swapping ith and jth digit in the number given.
FORMAT:
number of digits in the number.
Next line has the number.
Next line has ith and jth index to be swapped (1 based indexing).
INPUT:
9
1 2 3 4 4 5 6 6 7
1 3
OUTPUT:
321445667
*/

#include"stdio.h"

int main(void)
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int flag = 0;    //no declaration of flag

	for(int i = 0;i < n;i++)
	  scanf("%d", &arr[i]);

	int i, j;
	scanf("%d %d", &i, &j);

	i-= 1;  //remove semicolons
	j-= 1;  //remove semicolons

	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j]; //arr[j]= to be replaced by arr[i]
	arr[i] = arr[i] ^ arr[j];

	for(int i = 0;i<n;i++)
	    printf("%d", arr[i]); //append newline

	return 0;
}

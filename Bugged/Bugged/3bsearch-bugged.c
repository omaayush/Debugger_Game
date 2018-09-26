/*
Q3,
Given N integers, count if any pair of integers whose difference is K is present.

Input Format

The first line contains N and K.
The second line contains numbers of the set. All the numbers are unique.
output: YES or NO

5 2
1 5 3 4 2
Output: YES
*/

#include <stdio.h>

int main(void)
{
	int n,i,j,k,flag=0;
	scanf("%d %d", n, k);

	int arr[n];

	for(i = 0;i<n;i++)
	  scanf("%d", &arr[i]);

	for(i = 0; i < n-1; i ++)
	  for(j = i + 1; j < n; j++)
		   if(checkifdifference(arr,arr[i],arr[j],k)!=0)
			{
			  flag = 1; break;
			}

	if(flag == 1)
		printf("YES");
	else
		printf("NO");

	return 0;
}

int checkifdifference(int a[],int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;

     if(a[mid]<key)
         low=mid-1;
     else if(a[mid]>key)
         high=mid+1;
     else
         return mid;
   }
   return 0;
}

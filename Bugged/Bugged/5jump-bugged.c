/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Following program checks if it is possible to reach the last index.

Sample Input 1:
5
2 3 1 1 4

Sample Output 2:
Possible

Sample Input 2:
5
3 2 1 0 4

Sample Output 2:
Not Possible
*/

#include<stdio.h>

int n,ans=0;

void canJump(int arr[],int i)
{
    int j;
    if(i==n-1)
    {
        ans = 1;
        return;
    }

    for(j=1;j<=arr[i];j++)
        if((i+j)>n)
            canJump(arr,i+j);
    return;
}

int main()
{
    scanf("%d",&n);
    int i,j;
    int arr = malloc (sizeof (int) * n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    canJump(arr,0);

    if(ans=1)
        printf("Not Possible");
    else
        printf("Possible");

    return 0;
}

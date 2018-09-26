/*
   Following is an efficient implementation to generate primes upto given size.
   The program takes size as input and prints all the primes less than or equal to that size.

   The only input line contains the value of size. Maximum value of size can be 1000000.

   Sample Input:
   10

   Sample Output:
   2 3 5 7
*/

#include<stdio.h>

int size;
int is_prime[1000001] = {0};

int generate_primes()
{

    for(i=2;i<size+1;i++)
        is_prime[i]=1;

    for(i=2;i<size+1;i++)
        if(!is_prime[i])
        {
            for(j=i*i;j<size+1;j++)
                is_prime[j]=0;
            printf("%d ",i);
        }
    return 0;
}

int main()
{
    scanf("%d",size);
    generate_primes();
    return 0;
}

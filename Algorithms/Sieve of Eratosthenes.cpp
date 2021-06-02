#include <stdio.h>
#include <string.h>
 
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
	int p,i,x; 
    memset(prime, true, sizeof(prime));
 
    for ( p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            x=p*p;
            for ( i =x; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ",p);
}
 

int main()
{
    int n;
    printf("Enter the range : \n");
    scanf("%d",&n);
    printf("Following are the prime numbers smaller than or equal to %d \n" ,n );
    SieveOfEratosthenes(n);
    return 0;
}

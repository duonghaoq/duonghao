#include <stdio.h>
#include <math.h>

int CheckPrime(int n);
int CheckPrime1(int n);
int main()
{
    int i, n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (CheckPrime(i)==1)

            printf("%d", i);

       
    }
    return (0);
}1
int CheckPrime(int n)
{
    // prime: so nguyen to
    int i, prime = 1;

    // true:1
    // false:0
    for (i = 2; i < n; i++)

        if (n % i == 0)
        {

            prime = 0;

            break;
        }
    if (n <= 1)
        prime = 0;

    return prime;
}
int CheckPrime1(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    } // end of for
    return (n > 2);
}
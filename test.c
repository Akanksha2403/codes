#include <stdio.h>
#define ll long long
int main()
{
    printf("Enter the length of data to be send : ");

    ll n;
    scanf("%lld", &n);

    printf("Enter the data to be send : ");
    char num[n + 1];

    scanf("%s", num);
    ll setbits = 0, setbits2 = 0;
    for (ll i = 0; i <= n - 1; i++)
    {
        if (num[i] == '1')
        {
            setbits++;
        }
    }

    printf("The data with the parity bit : ");

    printf("%s", num);
    if (setbits % 2 == 0)
    {
        printf("0 \n");
    }
    else
    {
        printf("1 \n");
    }

    printf("Enter the received data : ");
    char num2[n + 2];

    scanf("%s", num2);
    for (ll i = 0; i <= n; i++)
    {
        if (num2[i] == '1')
        {
            setbits2++;
        }
    }

    if (setbits2 & 1)
    {
        printf("Error\n");
    }
    else
    {
        printf("No-error\n");
    }
    typeof
    return 0;
}

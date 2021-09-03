#include <bits/stdc++.h>
#define n 1000000
using namespace std;

void sieve()
{
    static vector<int> isprime(n, -1);

    for (int i = 2; i * i < n; i++)
    {
        if (isprime[i] != -1)
        {
            continue;
        }
        isprime[i] = 0;
        for (int j = i * i; j < n; j = j + i)
        {
            isprime[j] += 1;
        }
    }
    isprime[0] = 0;
    isprime[1] = 0;
}
int main()
{
    //write your code from here
    sieve();
    while (true)
    {
        int num;
        cin >> num;
        cout << isprime[num] << endl;
    }

    return 0;
}

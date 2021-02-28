#include <bits/stdc++.h>
#define n 1000000
using namespace std;
vector<int> isprime(n, true);
void isprimesolver()
{
    
    for (int i = 2; i * i < n; i++)
    {
        if (isprime[i] == 0)
        {
            continue;
        }
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
    isprimesolver();
    while (true)
    {
        int num;cin >> num;
        cout << isprime[num] << endl;
    }
    
    return 0;
}
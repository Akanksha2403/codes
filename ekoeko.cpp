/* SMOL
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll func()
{
    ll m, n;
    cin >> m >> n;
    cout << m%n << endl;
    return 0;
}
int main()
{
    //write your code from here
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        func();
    }
    return 0;
}
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void inputarr(ll arr[], ll n, ll m = 0)
{
    for (int i = m; i < n; i++)
    {
        cin >> arr[i];
    }
}
int func()
{
    ll n;
    cin >> n;
    ll arr[n];
    inputarr(arr, n);
    if (arr[0] < arr[n - 1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
int main()
{
    //write your code from here
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        func();
    }
    return 0;
}

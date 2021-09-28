#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define debug(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl
#define debugp(x)          \
    for (auto element : x) \
    cout << element.first << " " << element.second << endl
#define db(x) cout << #x << " = " << x << "\n"
#define rep(i, k, n) for (ll i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll i = k; i >= n; i--)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define ld long double
#define clr(s) memset(s, 0, sizeof(s))
#define new_string(str) \
    string str;         \
    stringinput(str);
#define new_int_1(t) \
    ll t;            \
    cin >> t;
#define new_int_2(a, b) \
    ll a, b;            \
    cin >> a >> b;
#define new_int_3(a, b, c) \
    ll a, b, c;            \
    cin >> a >> b >> c;
#define new_int_4(a, b, c, d) \
    ll a, b, c, d;            \
    cin >> a >> b >> c >> d;
#define new_int_5(a, b, c, d, e) \
    ll a, b, c, d, e;            \
    cin >> a >> b >> c >> d >> e;
#define new_int_6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;            \
    cin >> a >> b >> c >> d >> e;
typedef vector<string> vs;
typedef vector<vector<ll>> vvi;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vii;
typedef vector<set<ll>> vsi;
typedef vector<set<pair<ll, ll>>> vspii;
typedef vector<vector<pair<ll, ll>>> vvpii;
typedef pair<ll, ll> pii;
typedef pair<ll, pair<ll, ll>> pipii;
typedef pair<ll, string> pis;
typedef pair<string, string> pss;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef map<char, ll> mci;
typedef map<string, string> mss;
typedef set<ll> si;
typedef set<pair<ll, ll>> spii;
typedef set<pair<string, ll>> spsi;
const ll mod = 1000000007;
const ll mod2 = 998244353;
void stringinput(string &str)
{
    cin >> str;
}
vector<ll> randvec(ll n, ll start = 0, ll end = 100)
{
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        arr[i] = rand() % end;
        if (arr[i] < start)
        {
            arr[i] = arr[i] + start;
        }
    }
    return arr;
}
ll input()
{
    new_int_1(n);
    return n;
}
vi inputvec(ll n, ll start = 0)
{
    vi vec(n);
    for (ll i = start; i < n; i++)
    {
        *(vec.begin() + i) = input();
    }
    return vec;
}

// Functions below
ll power(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y % 2 == 1)
            res = (res * x) % mod;

        y = y >> 1;
        x = (x * x) % mod;
    }
    return res % mod;
}

vector<ll> randvec(ll n, ll start = 0, ll end = 100)
{
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        arr[i] = rand() % end;
        if (arr[i] < start)
        {
            arr[i] = arr[i] + start;
        }
    }
    return arr;
}

/* binarytoint inttobinary

vi inttobinary(ll n)
{
    vi binary(63);
    for (ll i = 0; i < 64 && n != 0; i++)
    {
        if (n % 2 == 0)
        {
            binary[i] = 0;
        }
        else
        {
            binary[i] = 1;
        }
        n = n / 2;
    }
    return binary;
}
int binarytoint(vi &num)
{
    int dec_value = 0;
    ll base = 1;

    for (ll i = 0; i < num.size(); i++)
    {
        if (num[i] == 1)
        {
            dec_value += base;
        }
        base = base * 2;
    }
    return dec_value;
}
 */

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

/* TO FIND NO OF PRIME FACTORS OF A NUMBER
ll nooffactors(ll n)
{
    ll ans = 0; // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        ans++;
        n = n / 2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i*i <= n; i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            ans++;
            n = n / i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        ans++;
    return ans;
} 
*/

/* sieve starts here |sieve modified to provide smallest factors of a number|
const ll range = 1000006;
//vi factors(range + 1, 0);
vi prime(range + 1, 0);
void SieveOfEratosthenes()
{
    for (int p = 2; p * p <= range; p++)
    {
        if (prime[p] == false)
        {
            for (int i = p * p; i <= range; i += p)
                if (!prime[i])
                    prime[i] = i / p;
        }
    }
}
*/

int main()
{
}

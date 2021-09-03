#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll unsigned long long int
#define print(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl
#define db(x) cout << #x << " = " << x << "\n"
#define range(i, n) for (ll i = 0; i < n; i++)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define loopr(i, a, b) for (ll i = a; i >= b; i--)
#define loops(i, a, b, step) for (ll i = a; i < b; i += step)
#define looprs(i, a, b, step) for (ll i = a; i >= b; i -= step)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define ld long double
#define new_string(str) \
    string str;         \
    cin >> str;
#define new_int_1(t) \
    ll t;            \
    cin >> t;
#define ll2(a, b) \
    ll a, b;      \
    cin >> a >> b;
#define ll3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c;
#define ll4(a, b, c, d) \
    ll a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define V vector
#define P pair
#define MS multiset
#define UM unordered_map
#define US unordered_set
#define MM multimap
#define mp make_pair
#define pb push_back
#define pf push_front
#define F first
#define S second
#define FAST ios_base::sync_with_stdio(false);
#define all(a) a.begin(), a.end()
const ll mod = 1000000007;
const ll mod2 = 998244353;
const double pi = acos(-1);
typedef vector<string> vs;
typedef vector<ll> vi;
typedef set<ll> si;
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
        vec[i] = input();
    }
    return vec;
}
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = a;
        a = b;
        b = temp % a;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}
ll func()
{
    new_int_1(n);
    if (n == 1)
        return 2;
    ll lcmof = 2;
    ll used = 0;
    ll ans = 0;
    for (ll i = 2; i <= n + 1; i++)
    {
        lcmof = lcm(i, lcmof);
        ll left = n / lcmof;
        ll nleft = n - left - used;
        used = n - left;
        ans += nleft * i;
        ans = ans%mod;
        if (n / lcmof == 0)
        {
            break;
        }
    }

    return ans;
}
int main()
{
    // FAST;
    new_int_1(t);
    while (t--)
    {
        cout << func() << endl;
    }
}

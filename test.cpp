#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define V vector
#define P pair
#define S string
#define MS multiset
#define UM unordered_map
#define US unordered_set
#define MM multimap
#define mp make_pair
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL);
#define all(a) a.begin(), a.end()
#define print(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl
#define db(x) cout << #x << " = " << x << "\n"
#define range(i, n) for (ll i = 0; i < n; i++)
#define ranges(i, s, n) for (ll i = s; i < n; i++)
#define sranges(i, start, stop, step) for (ll i = start; i < stop; i = i + step)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define testcase(t) \
    new_int_1(t);   \
    range(i, t)
#define new_string(str) \
    string str;         \
    cin >> str;
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
const ll mod = 1000000007;
const ll mod2 = 998244353;
const ld pi = acos(-1);
typedef vector<string> vs;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;
typedef pair<ll, string> pis;
typedef pair<string, string> pss;
typedef pair<string, ll> psi;
typedef map<ll, ll> mii;
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

ll power(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y % 2 == 1)
            res = (res * x) % mod2;

        y = y >> 1;
        x = (x * x) % mod2;
    }
    return res % mod2;
}

ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;

    ll ans = 1;
    sranges(i, 1, n + 1, 1)
    {
        ans = ans * i;
    }
    // getting r inverse
    sranges(i, 1, n + 1, 1)
    {
        ans = ans * power(i, mod2 - 2);
    }
    return ans;
}

ll func()
{

    new_int_1(n);
    new_string(str);
    ll u = 0;
    sranges(i, 0, n - 1, 1)
    {
        if (str[i] == '1')
        {
            if (str[i] == str[i + 1])
            {
                u++;
                i++;
            }
        }
    }
    ll zeros = 0;
    range(i, n)
    {
        if (str[i] == '0')
        {
            zeros++;
        }
    }
    return ncr(zeros + u, zeros);
}
int main()
{
    // FAST;
    testcase(t)
    {
        cout << func() << endl;
    }
}
#include <bits/stdc++.h>
// Uncomment them for optimisations
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
using namespace std;
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define range(...)                         \
    GET_MACRO(__VA_ARGS__, r4, r3, r2, r1) \
    (__VA_ARGS__)
#define r4(var, start, stop, step) for (ll var = start; step >= 0 ? var < stop : var > stop; var = var + step)
#define r3(var, start, stop) for (ll var = start; var < stop; var++)
#define r2(var, stop) for (ll var = 0; var < stop; var++)
#define r1(stop) for (ll start_from_0 = 0; start_from_0 < stop; start_from_0++)
#define newint(...) \
    ll __VA_ARGS__; \
    take_input(__VA_ARGS__)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})
#define give(...)           \
    {                       \
        print(__VA_ARGS__); \
        return;             \
    }
#define endl "\n"
#define FULL_INF numeric_limits<double>::infinity()
#define INF LONG_LONG_MAX
#define INT_INF INT_MAX
#define ll long long
#define ld long double
#define V vector
#define P pair
#define S set
#define MS multiset
#define M map
#define UM unordered_map
#define US unordered_set
#define MM multimap
#define mt make_tuple
#define mp make_pair
#define pb push_back
#define pf push_front
#define FAST ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
#define all(a) a.begin(), a.end()
#define db(x) cout << #x << " = " << x << "\n"
#define newstring(str) \
    string str;        \
    cin >> str;
#define foreach(a, x) for (auto &a : x)
const ll mod = 1000000007;
const ll mod2 = 998244353;
const ld pi = acos(-1);
typedef vector<string> vs;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef map<ll, ll> mii;
typedef set<ll> si;
template <typename... T>
void take_input(T &&...args) { ((cin >> args), ...); }
ll input()
{
    newint(n);
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
template <typename T>
bool btn(T a, T b, T c)
{
    if ((a <= b && b <= c) || (a >= b && b >= c))
        return true;
    return false;
}
template <typename T>
ostream &operator<<(ostream &os, const V<T> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        os << v[i];
        if (i != v.size() - 1)
            os << " ";
    }
    return os;
}
template <typename... T>
void print(T &&...args)
{
    ((cout << args << " "), ...);
    cout << endl;
}
template <typename... T>
void printl(T &&...args) { ((cout << args << " "), ...); }
inline ld TLD(ll n) { return n; }
inline ll gcd(ll m, ll n) { return __gcd(m, n); }
inline ll rs(ll n) { return n % mod; }
/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */

//      ncr of a number
ll NCR(ll n, ll r)
{
    if (r > n)
        return 0;
    ll m = mod2;
    ll inv[r + 1] = {0};
    inv[0] = 1;
    if (r + 1 >= 2)
        inv[1] = 1;

    // Getting the modular inversion
    // for all the numbers
    // from 2 to r with respect to m
    // here m = 1000000007
    for (ll i = 2; i <= r; i++)
    {
        inv[i] = m - (m / i) * inv[m % i] % m;
    }

    ll ans = 1;

    // for 1/(r!) part
    for (ll i = 2; i <= r; i++)
    {
        ans = ((ans % m) * (inv[i] % m)) % m;
    }

    // for (n)*(n-1)*(n-2)*...*(n-r+1) part
    for (ll i = n; i >= (n - r + 1); i--)
    {
        ans = ((ans % m) * (i % m)) % m;
    }
    return ans;
}

ll handleit(ll n, ll k, string &str)
{
    vi ans;
    ll i = 0;
    if (str[0] == '0')
        ans.push_back(1);
    else
        ans.push_back(-1);
    range(i, 1, n)
    {
        if (str[i] == '1' && str[i - 1] == '1')
            continue;
        else if (str[i] == '1')
            ans.push_back(-1);
        else if (str[i] == '0' && str[i - 1] == '1')
            ans.push_back(1);
        else
            ans[ans.size() - 1]++;
    }
    ll myans = 0;
    n = ans.size();
    range(i, n)
    {
        if (ans[i] == -1)
        {
            ll a1 = 0, a2 = 0;
            if (i - 1 >= 0)
                a1 = ans[i - 1];
            if (i + 1 < n)
                a2 = ans[i + 1];
            myans += a1 + a2;
        }
    }
    return myans + 1;
}

ll func(ll n, ll k, string &str)
{
    if (k == 1)
    {
        return handleit(n, k, str);
    }
    map<ll, ll> prefix;
    prefix[-1] = 0;
    range(i, n)
    {
        ll old = prefix[i - 1];
        if (str[i] == '1')
            old++;
        prefix[i] = old;
    }
    ll i = -1, j = -1;
    range(u, n)
    {
        if (prefix[u] > k)
        {
            i = u - 1;
            break;
        }
        if (u == n - 1 && prefix[u] == k)
        {
            i = n - 1;
            break;
        }
    }

    vi ans;
    ans.push_back(NCR(i - j, k));
    while (true)
    {
        i++;
        while (str[i + 1] == '0' && i != str.size())
        {
            i++;
        }
        if (i == str.size())
            break;

        while (prefix[i] - prefix[j] > k)
            j++;
        ans.push_back(NCR(i - j, k));
    }
    ll u = accumulate(all(ans), 0LL);
    return u;
}
int main()
{
    // Uncomment for faster I/O
    // FAST;
    newint(n, k);
    newstring(str);
    ll k1 = count(all(str), '1');
    if (k1 < k || k == 0 || k1 == n)
    {
        print(1);
        return 0;
    }
    else
    {
        bool a = true;
        ll ans = 0;
        for (ll u = k; u > 0; u--)
        {
            if (a)
                ans += func(n, u, str);
            else
                ans -= func(n, u, str);
            a = !a;
        }
        print(ans);
    }
}

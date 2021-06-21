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
#define new_int_2(a, b) \
    ll a, b;            \
    cin >> a >> b;
#define new_int_3(a, b, c) \
    ll a, b, c;            \
    cin >> a >> b >> c;
#define new_int_4(a, b, c, d) \
    ll a, b, c, d;            \
    cin >> a >> b >> c >> d;
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
#define ld long double
#define V vector
#define M map
const ll mod = 1000000007;
const ll mod2 = 998244353;
const double pi = acos(-1);
typedef V<string> vs;
typedef V<ll> vi;
typedef V<vi> vvi;
typedef P<ll, ll> pii;
typedef V<pii> vpii;
typedef pair<ll, pii> pipii;
typedef pair<ll, string> pis;
typedef pair<string, string> pss;
typedef pair<string, ll> psi;
typedef M<ll, ll> mii;
typedef M<string, ll> msi;
typedef M<char, ll> mci;
typedef M<string, string> mss;
typedef set<ll> si;
typedef V<si> vsi;
typedef set<pii> spii;
typedef set<psi> spsi;
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
ll func()
{
    new_int_2(n, k);
    new_string(str);
    ll flag = 0;
    loop(i, 0, str.length())
    {
        
    }
    str = str.substr(0, flag); //string rectified
    ll pos = str.find(str[0], 1);
    if (str.substr(0, pos) > str.substr(pos, str.find(str[0], pos + 1)))
        return 0;
}
int main()
{
    func();
}
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
void adjustment(vi &vec, ll n){
    ll last = vec[vec.size()-1];
    if(last > 0){
        while(vec.size() != n) {last++;vec.push_back(last);}
    }
    else if(last < 0){
        while(vec.size() != n) {last--;vec.push_back(last);}
    }
    ll mini = *min_element(all(vec));
    foreach(i, vec) i = i - mini + 1;
}
void func()
{
    newint(n, lmax, lmin);
    if (abs(lmin - lmax) > 1)
    {
        give(-1);
    }
    vi vec;
    if(lmin == 0 && lmax == 0) 
    {
        range(i, 1, n+1) vec.push_back(i);
        give(vec);
    }

    ll clmin = lmin, clmax = lmax;
    if (lmax > lmin)
    {
        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(-1);
        lmax -= 1;
        ll mini = -2, maxi = 2;
        while (lmax || lmin)
        {
            if (vec[vec.size() - 1] <= 0 && lmin > 0)
            {
                vec.push_back(maxi);
                maxi++;
                lmin--;
            }
            else if (vec[vec.size() - 1] >= 0 && lmax > 0)
            {
                vec.push_back(mini);
                mini--;
                lmax--;
            }
        }
    }
    else
    {
        vec.push_back(0);
        vec.push_back(-1);
        vec.push_back(1);
        lmin -= 1;
        ll mini = -2, maxi = 2;
        while (lmax || lmin)
        {
            if (vec[vec.size() - 1] <= 0 && lmin > 0)
            {
                vec.push_back(maxi);
                maxi++;
                lmin--;
            }
            else if (vec[vec.size() - 1] >= 0 && lmax > 0)
            {
                vec.push_back(mini);
                mini--;
                lmax--;
            }
        }
    }
    if(vec.size() > n)
    {
        give(-1);
    }

    adjustment(vec, n);
    print(vec);

}
int main()
{
    // Uncomment for faster I/O
    // FAST;
    newint(t);
    range(t)
    {
        func();
    }
}

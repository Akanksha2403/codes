#include <bits/stdc++.h>
// Uncomment them for optimisations
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
using namespace std;
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define range(...)                         \
    GET_MACRO(__VA_ARGS__, r4, r3, r2, r1) \
    (__VA_ARGS__)
#define r4(var, start, stop, step) for (auto var = start; start <= stop ? var < stop : var > stop; var = var + step)
#define r3(var, start, stop) for (auto var = start; var != stop; var++)
#define r2(var, stop) for (ll var = 0; var != stop; var++)
#define r1(stop) for (ll start_from_0 = 0; start_from_0 != stop; start_from_0++)
#define newint(...) \
    ll __VA_ARGS__; \
    take_input(__VA_ARGS__)
#define endl "\n"
#define FULL_INF numeric_limits<double>::infinity()
#define INF LONG_LONG_MAX
#define INT_INF INT_MAX
#define ll long long
#define ld long double
#define V vector
#define P pair
#define S string
#define MS multiset
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
#define new_string(str) \
    string str;         \
    cin >> str;
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
template <typename... T, typename Q>
Q max(Q arg1, T &&...args)
{
    Q ans = arg1;
    ((ans = (args > ans ? args : ans)), ...);
    return ans;
}
template <typename... T, typename Q>
Q min(Q arg1, T &&...args)
{
    Q ans = arg1;
    ((ans = (args < ans ? args : ans)), ...);
    return ans;
}

ld TLD(ll n) { return n; }

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

vector<ll> randVec(ll n, ll start = 0, ll end = 100)
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

//      inttobinary
vi intToBinary(ll n)
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

//      binarytoint
int binaryToInt(vi &num)
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

//      hcf finder
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

//      TO FIND NO OF PRIME FACTORS OF A NUMBER
ll noOfFactors(ll n)
{
    ll ans = 0; // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        ans++;
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i * i <= n; i = i + 2)
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

//      sieve starts here |sieve modified to provide smallest factors of a number|
const ll range = 1000006;
vi prime(range + 1, 0);
void sieveOfEratosthenes()
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

//      to find using segment tree

class SegmentTree
{
private:
    vi tree;
    vi vec;
    // change operation here
    inline ll opr(ll a, ll b)
    {
        return min(a, b);
    }
    ll constructTree(ll start, ll end, ll ind)
    {
        if (start == end)
            return tree[ind] = vec[start];
        // change operator here
        return tree[ind] = opr(constructTree(start, (start + end) / 2, ind * 2 + 1),
                               constructTree(1 + (start + end) / 2, end, ind * 2 + 2));
    }

public:
    SegmentTree(vi &vec)
    {
        ll n = vec.size();
        tree = vi(vec.size() * 4 + 10);
        this->vec = vec;
        constructTree(0, vec.size() - 1, 0);
    }

    ll rangeFind(ll start, ll end, ll index = 0, ll fullstart = -1, ll fullend = -1)
    {
        if (fullstart == -1)
            fullstart = 0, fullend = vec.size() - 1;
        if (start == fullstart && end == fullend)
            return tree[index];
        ll mid = (fullstart + fullend) / 2;
        if (btn(fullstart, end, mid))
        {
            return rangeFind(start, end, index * 2 + 1, fullstart, mid);
        }
        if (btn(mid + 1, start, fullend))
        {
            return rangeFind(start, end, index * 2 + 2, mid + 1, fullend);
        }
        else
        {

            return opr(rangeFind(start, mid, index * 2 + 1, fullstart, mid),
                       rangeFind(mid + 1, end, index * 2 + 2, mid + 1, fullend));
        }
    }
    void changeElement(ll index, ll newelement)
    {
        ll fullstart = 0, fullend = vec.size() - 1;
        ll treeindex = 0;
        vec[index] = newelement;

        // going to all the indexes
        while (true)
        {
            if (btn(fullstart, index, (fullstart + fullend) / 2))
            {
                fullend = (fullstart + fullend) / 2;
                treeindex = treeindex * 2 + 1;
            }
            else
            {
                fullstart = 1 + (fullstart + fullend) / 2;
                treeindex = treeindex * 2 + 2;
            }
            if (fullstart == fullend)
                break;
        }
        tree[treeindex] = newelement;
        // update all parents
        while (true)
        {
            treeindex = treeindex & 1 ? treeindex / 2 : treeindex / 2 - 1;
            if (treeindex < 0)
                break;
            tree[treeindex] = opr(tree[treeindex * 2 + 1], tree[treeindex * 2 + 2]);
        }
    }
};

int main()
{
}

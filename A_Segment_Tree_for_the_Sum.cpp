#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Uncomment them for optimisations
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
#define popcount(x) __builtin_popcount(x)
#define GET_MACRO(_1,_2,_3,_4,NAME,...) NAME
#define range(...) GET_MACRO(__VA_ARGS__, r4, r3, r2, r1)(__VA_ARGS__)
#define r4(var, start, stop, step) for(ll var=start;step>=0?var<stop:var>stop;var=var+step)
#define r3(var, start, stop) for(ll var = start; var < stop; var++)
#define r2(var, stop) for(ll var = 0; var < stop; var++)
#define r1(stop) for(ll start_from_0 = 0; start_from_0 < stop; start_from_0++)
#define newint(...) ll __VA_ARGS__; take_input(__VA_ARGS__)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})
#define give(...) {print(__VA_ARGS__); return ;}
#define endl "\n"
#define FULL_INF numeric_limits<double>::infinity()
#define INF INT64_MAX
#define INT_INF INT32_MAX
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
const ll mod = 1000000007; 
//const ll mod = 998244353; 
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(a) a.begin(), a.end()
#define db(x) cout << #x << " = " << x << "\n"
#define newstring(str) string str; cin >> str;
#define foreach(a, x) for (auto &&a : x)
const ld pi = acos(-1);
typedef vector<string> vs; typedef pair<ll, ll> pii;typedef vector<ll> vi;typedef map<ll, ll> mii; typedef set<ll> si; typedef vector<vector<ll>> vvi; 
template<typename ...T>void take_input(T&&...args){((cin >> args), ...);}
vi inputvec(ll n, ll start = 0){vi vec(n);range(i, start, n)cin >> vec[i];return vec;}
template<typename T>bool btn(T a, T b, T c){if((a <= b && b <= c) || (a >= b && b >= c)) return true; return false;}
template<typename T>ostream& operator<<(ostream& os,const V<T>& v){for(int i=0;i<v.size();++i){os<<v[i];if(i!=v.size()-1)os<<" ";}return os;}
template <typename _A, typename _B>ostream &operator<<(ostream &os, const pair<_A, _B> &p){os<<"["<<p.first<<", "<<p.second<<"]";return os;}
template<typename... T>void print(T &&...args){((cout<<args<< " "), ...);cout<<endl;}
template<typename... T>void printl(T &&...args){ ((cout << args << " "), ...);}
inline ld TLD(ll n) {return n;}
ll gcd(ll __m, ll __n) { return __n == 0 ? __m : gcd(__n, __m % __n);}
inline ll rs(ll n){return (n=n%mod)>=0?n:n+mod;}
ll power(ll x, ll y){ll res = 1;while (y){if(y&1LL)res=(res*x)%mod;y>>=1;x=(x*x)%mod;}return res % mod;}

/* -------------------------------------------------------------------------------------------------------------------------------------------------------- */

class SegmentTree
{
private:
    vi tree;
    vi vec;
    ll n, _n;
    inline ll mid(ll a, ll b) { return (a + b) >> 1; }
    // change operation here
    inline ll opr(ll a, ll b)
    {
        return a + b; 
        // return min(a , b);
    }
    ll constructTree(ll start, ll end, ll ind)
    {
        if (start == end)
            return tree[ind] = vec[start];
        // change operator here
        return tree[ind] = opr(constructTree(start, mid(start, end), (ind << 1) + 1),
                               constructTree(1 + mid(start, end), end, (ind << 1) + 2));
    }
 
public:
    SegmentTree(vi &vec)
    {
        n = vec.size();
        _n = 1;
        while (_n < n)
            _n <<= 1;
        tree = vi((_n << 1) - 1);
        this->vec = vec;
        constructTree(0, vec.size() - 1, 0);
    }
 
    ll rangeFind(ll start, ll end, ll index = 0, ll fullstart = -1, ll fullend = -1)
    {
        if (fullstart == -1)
            fullstart = 0, fullend = vec.size() - 1;
        if (start == fullstart && end == fullend)
            return tree[index];
        ll mid = ((fullstart + fullend) >> 1);
        if (btn(fullstart, end, mid))
        {
            return rangeFind(start, end, (index << 1) + 1, fullstart, mid);
        }
        if (btn(mid + 1, start, fullend))
        {
            return rangeFind(start, end, (index << 1) + 2, mid + 1, fullend);
        }
        else
        {
 
            return opr(rangeFind(start, mid, (index << 1) + 1, fullstart, mid),
                       rangeFind(mid + 1, end, (index << 1) + 2, mid + 1, fullend));
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
            if (fullstart == fullend)
                break;
            if (btn(fullstart, index, mid(fullstart, fullend)))
            {
                fullend = mid(fullstart, fullend);
                treeindex = (treeindex << 1) + 1;
            }
            else
            {
                fullstart = 1 + mid(fullstart, fullend);
                treeindex = (treeindex << 1) + 2;
            }
            
        }
        tree[treeindex] = newelement;
        // update all parents
        while (true)
        {
            treeindex = treeindex & 1 ? (treeindex >> 1) : (treeindex >> 1) - 1;
            if (treeindex < 0)
                break;
            tree[treeindex] = opr(tree[(treeindex << 1) + 1], tree[(treeindex << 1) + 2]);
        }
    }
};



void func()
{
    newint(n, m); 
    vi vec = inputvec(n); 
    SegmentTree seg(vec); 
    range(m)
    {
        newint(a, b, c); 
        if(a == 1)
        {
            seg.changeElement(b, c); 
        }
        else {
            print(seg.rangeFind(b, c-1)); 
        }
    }
}
int main()
{
    // Uncomment for faster I/O
    // FAST;
    {
        func();
    }
}

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
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define ld long double
#define clr(s) memset(s, 0, sizeof(s))
#define new_string(str) \
    string str;         \
    stringinput(str);
#define ll1(t) \
    ll t;      \
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
#define ll5(a, b, c, d, e) \
    ll a, b, c, d, e;      \
    cin >> a >> b >> c >> d >> e;
#define ll6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;      \
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
ll input()
{
    ll1(n);
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

template <typename T>
class graph
{
public:
    map<T, map<T, ll>> adj;
    void addedge(T from, T to, bool bidirectional = true)
    {
        adj[from][to] = 1;
        bidirectional ? adj[to][from] = 1 : 0;
    }
    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j.first << " ";
            }
            cout << endl;
        }
    }
    void dfs(ll s)
    {
        static unordered_map<ll, bool> visited;
        visited[s] = 1;
        cout << s << ' ';
        for (auto neighbours : adj[s])
        {
            if (visited.find(neighbours.first) == visited.end())
            {
                dfs(neighbours.first);
            }
        }
    }
    void bfs(ll s)
    {
        static unordered_map<ll, bool> visited;
        static queue<ll> que;
        if (que.size() == 0)
        {
            que.push(s);
            visited[s] = true;
        }
        while (que.size() != 0)
        {
            for (auto neighbours : adj[que.front()])
            {
                if (visited.find(neighbours.first) != visited.end())
                {
                    continue;
                }
                visited[neighbours.first] = true;
                que.push(neighbours.first);
                cout << neighbours.first << " ";
            }
            que.pop();
        }
    }
};
ll func()
{
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    graph<ll> g;
    g.addedge(1, 2);
    g.addedge(1, 3);
    g.addedge(2, 4);
    g.addedge(2, 5);
    g.addedge(4, 5);
    g.addedge(3, 8);
    g.addedge(4, 6);
    g.addedge(4, 7);
    g.addedge(6, 9);
    g.addedge(8, 9);
    g.addedge(8, 10);
    g.addedge(3, 9);
    g.addedge(10, 1);
    g.print();
    g.bfs(1);
}

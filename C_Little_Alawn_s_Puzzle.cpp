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
    class Graph
    {
    public:
        map<ll, ll> adj;
        void addedge(ll from, ll to)
        {
            this->adj[from]= to;
        }
        void dfs(ll n, unordered_set<ll> &visited)
        {
            visited.insert(n);
            if(visited.find(adj[n]) != visited.end())
            {
                return;
            }
            dfs(adj[n], visited);
        }
        ll func()
        {
            ll1(n);
            vi vec = inputvec(n);
            vi vec2 = inputvec(n);
            for (ll i = 0; i < n; i++)
            {
                addedge(vec[i], vec2[i]);
            }
            unordered_set<ll> visited;
            ll connect = 0;
            for (ll i = 0; i < n; i++)
            {
                if(visited.find(vec[i]) != visited.end())
                {
                    continue;
                }
                dfs(vec[i], visited);
                connect++;
            }
            cout << power(2, connect) << endl;
            return 0;
        }
    };
    int main()
    {
        ios_base::sync_with_stdio(false);
        ll1(t);
        rep(i, 0, t)
        {
            Graph g;
            g.func();
        }
    }

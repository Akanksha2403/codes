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
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define all(a) a.begin(), a.end()
#define print(x)                \
    for (auto element : x)      \
        cout << element << " "; \
    cout << endl
#define db(x) cout << #x << " = " << x << "\n"
#define range(i, n) for (ll i = 0; i < n; i++)
#define ranges(i, s, n) for (ll i = s; i < n; i++)
#define sranges(i, start, stop, step) for (ll i = start; i != stop; i = i + step)
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
V<vs> dp;
string func(string &str, ll start, ll end, char c)
{
    if (dp[start][c - '0'] != "-1")
    {
        return dp[start][c - '0'];
    }
    ll pos;
    if (start == end || (pos = str.find(c, start)) == string::npos)
        return dp[start][c - '0'] = string(1, c);
    else
    {
        string str1 = func(str, pos + 1, end, '0');
        string str2 = func(str, pos + 1, end, '1');
        if (str1.size() < str2.size())
        {
            return dp[start][c - '0'] = str1 + c;
        }
        else if (str1.size() == str2.size())
        {
            for (ll i = str1.size() - 1; i >= 0; i--)
            {
                if (str1[i] == str2[i])
                    continue;
                else
                {
                    if (str1[i] == '0')
                    {
                        return dp[start][c - '0'] = str1 + c;
                    }
                    else
                    {
                        return dp[start][c - '0'] = str2 + c;
                    }
                    break;
                }
            }
            // return dp[start][c - '0'] = c+ min(str1, str2) ;
        }
        else
        {
            return dp[start][c - '0'] = str2 + c;
        }
    }
    return "0";
}
int main()
{
    // FAST;
    testcase(t)
    {
        new_string(str);
        if (str.find('0') == string::npos)
        {
            cout << 0 << endl;
            continue;
        }
        dp = V<vs>(str.size() + 1, vs(2, "-1"));
        auto ans = func(str, 0, str.size(), '1');
        reverse(all(ans));
        cout << ans << endl;
    }
}

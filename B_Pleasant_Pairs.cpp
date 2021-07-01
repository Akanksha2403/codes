#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ld long double
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
typedef vector<vector<ll>> vvi;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;
typedef pair<ll, string> pis;
typedef pair<string, string> pss;
typedef pair<string, ll> psi;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef map<char, ll> mci;
typedef map<string, string> mss;
typedef set<ll> si;

// ll input()
// {
//     new_int_1(n);
//     return n;
// }
// vi inputvec(ll n, ll start = 0)
// {
//     vi vec(n);
//     for (ll i = start; i < n; i++)
//     {
//         vec[i] = input();
//     }
//     return vec;
// }
// ll func()
// {
//     new_int_1(n);
//     vi vec = inputvec(n);
//     V<pair<ld, ll>> process(n);
//     for (ll i = 0; i < n; i++)
//     {
//         process[i].first = (((ld)vec[i]) / ((ld)(i + 1)));
//         process[i].second = (i + 1);
//     }

//     V<pii> newvec(n);
//     for (ll i = 0; i < n; i++)
//     {
//         ll index = process[i].second;
//         newvec[i].first = vec[index - 1];
//         newvec[i].second = index;
//     }
//     ll ans = 0;
//     loop(i, 0, n)
//     {
//         ll l = i+1, r = n, mid;
//         while (l <= r)
//         {
//             mid = (l + r) / 2;

//             if (newvec[i].first * newvec[mid].first == newvec[i].second + newvec[mid].second)
//             {
//                 ans++;
//                 break;
//             }
//             else if (vec[i] * vec[mid] > i + mid)
//             {
//                 r = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//     }
//     cout << ans << endl;

//     return 0;
// }
// int main()
// {
//     FAST;
//     new_int_1(t);
//     while (t--)
//     {
//         func();
//     }
// }
#define ll long long
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, ic;
    cin >> t;
    loop(ic, 1, t)
    {
        ll num;
        cin >> num;
        ll arr[num];
        loop(i, 0, num)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        loop(i, 1, num)
        {
            ll mx = (2 * (i + 1)) - 1;
            ll val1 = arr[i];
            ll val2 = i + 1;
            ll m = 1;

            while (1)
            {
                ll t1 = val1 * m;
                if (t1 > mx)
                {
                    break;
                }
                ll t2 = t1 - val2;

                if (t2 >= 1)
                {
                    if (arr[t2 - 1] == m)
                    {
                        ans++;
                    }
                }

                m++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
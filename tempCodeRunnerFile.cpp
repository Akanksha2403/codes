<<<<<<< HEAD
// #include<bits/stdc++.h> 
// using namespace std;

// int func(){
//     int n, k, sum = 0, boxes = 0, i;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
    

//     for (i = n-1; i >= 0; i = i-2)
//     {
//         boxes += 1;
//         sum = sum + arr[i];
//         if(sum >= k) break;
//     }

//     sum = 0;

//     for (i = n-2; i >= 0; i = i-2)
//     {
//         boxes += 1;
//         sum = sum + arr[i];
//         if(sum >= k) break;
//     }
    
//     cout << boxes << endl;
//     return 0;   
// }
    
    

   
// int main(){
//     //write your code from here

//     int test_cases;
//     cin >> test_cases;
//     while (test_cases > 0)
//     {
//         func();
//         test_cases-=1;
//     }
    

//     return 0;
// }


#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int func(){
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
            cout << "\n";
        cout << (char)(str[i]-32);
    }
    return 0;


}
int main(){
    //write your code from here
    func();

    return 0;
}
=======
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
//sieve starts here
//(sieve modified to provide smallest factors of a number)

const ll n = 1000006;

vi prime(n + 1, 0);
void SieveOfEratosthenes()
{
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == false)
        {
            for (int i = p * p; i <= n; i += p)
                if (!prime[i])
                    prime[i] = i / p;
        }
    }
}
// sieve ends here
mii factors;
ll nooffactors(ll n)
{

    if (n > 100000)
    {
        for (ll i = 2; i <= sqrtl(n); i++)
        {
            if (n % i == 0)
            {
                return 1 + nooffactors(n / i);
            }
        }
        return 1;
    }
    else if (factors.find(n) != factors.end())
    {
        return factors[n];
    }
    else
    {
        if (prime[n] == 0)
        {
            return factors[n] = 1;
        }
        else
        {
            return factors[n] = 1 + nooffactors(prime[n]);
        }
    }
}
ll gcd(ll a, ll b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}
ll func()
{
    ll3(a, b, c);
    a > b?(void(0)):swap(a, b);
    if (c == 1)
    {
        if (a%b == 0 && a > b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return 0;
    }
    // else if(gcd(a, b) == 1)
    else
    {
        if(nooffactors(a) + nooffactors(b) >= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
int main()
{
    SieveOfEratosthenes();
    ios_base::sync_with_stdio(false);
    ll1(t);
    rep(i, 0, t)
    {
        func();
    }
}
>>>>>>> e32f673b2093ded28ba9277b59a2d78ca0d4cd85

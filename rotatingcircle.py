# #include <bits/stdc++.h>
# using namespace std;
# #define ll long long
# #define ld long double
# using namespace std;


# ll func(ll a, ll b, ll c, ll d, ll r)
# {
#     a = a - c;
#     b = b - d;
#     ll dia = 2*r;
#     ll ans = (a * a + b * b) / (dia * dia);
#     ll modans = ((a * a) + (b * b)) % (dia * dia);

#     if (modans != 0)
#     {
#         cout << (ll)sqrt(ans) + 1 << endl;
#     }
#     else
#     {
#         cout << (ll)sqrt(ans) << endl;
#     }
#     return 0;
# }

# int main()
# {
#     ll t;
#     cin >> t;
#     while(t--)
#     {
#         ll a, b, c, d, r;
#         cin >> a >> b >> c >> d >> r;
#         func(a, b, c, d, r);
#     }
# }
def func(a, b, c, d, r):
    a = a - c
    b = b - d
    dia = 2*r
    ans = (a**2+b**2)//(dia*dia)
    modans = (a**2 + b**2) % (dia*dia)

    if (modans != 0):
        print(int((ans**(1/2)))+1)
    else:
        print(int((ans)**(1/2)))
    return 0

t = int(input())
for _ in range(t):
    a, b, c, d, r = [int(x) for x in input().split()]
    func(a, b, c, d, r)

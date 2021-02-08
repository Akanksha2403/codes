// #include <iostream>
// using namespace std;
// int poweroftwochecker(int &n)
// {
//     while (n % 2 == 0)
//     {
//         n = n / 2;
//     }
//     return 0;
// }
// int main()
// {

//     int t, a, b, c;
//     cin >> t;
//     while (t--)
//     {
//         int arr_len, k, num;
//         cin >> arr_len >> k;
//         int arr[arr_len];
//         bool a = false, b = false;
//         poweroftwochecker(k);
//         // for (int i = 0; i < arr_len; i++)
//         // {
//         //     cin >> arr[i];
//         // }

//         for (int i = 0; i < arr_len; i++)
//         {
//             cin >> num;
//             if (num % k != 0)
//             {
//                 a = true;
//             }
//         }

//         if (a)
//         {
//             cout << "NO\n";
//         }
//         else
//         {
//             cout << "YES\n";
//         }
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int a, counter = 0; auto i = scanf("");
    while(i != EOF){
        i = scanf("%d", &a);
        counter = 0;
        while(a){
            a = a&(a-1);
            counter += 1;
        }
        printf("%d\n", counter);
    }
    return 0;
}
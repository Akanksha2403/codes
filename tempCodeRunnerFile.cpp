// #include <bits/stdc++.h>
// using namespace std;

// int func()
// {
//     int wins = 0;
//     int n, counter = 0;
//     cin >> n;
//     int arr[n + 1];
//     arr[n] = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n + 1);
//     arr[n] = INT_MIN;
//     for (int i = n - 1; i >= 1; i--)
//     {
//         bool a = false;
//         if (arr[i] == arr[0])
//         {
//             break;
//             cout << "execut";
//         }

//         for (int j = i + 1; j < n+1; j++)
//         {
//             if (arr[i] + i  + j - i - 1 > arr[j])
//             {
//             }
//             else
//             {
//                 a = true;
//                 break;
//             }
//         }
//         if (a == false)
//         {
//             counter += 1;
//         }
//     }
//     cout << counter << endl;

//     return 0;
// }
// int main()
// {
//     //write your code from here
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         func();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int func()
{
    int wins = 0;
    int n, counter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = n-1; i >= 0; i++)
    {
        if(arr[i] > arr[0]){
            counter += 1;
        }
        else
        {
            break;
        }
        
    }
    cout << counter << endl;

    return 0;
}
int main()
{
    //write your code from here
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        func();
    }
    return 0;
}

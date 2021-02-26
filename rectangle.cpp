// #include <bits/stdc++.h>
// using namespace std;

// int func()
// {
//     int n, m;
//     cin >> n >> m;
//     string arr[n];
//     int arr1[m] = {0};
//     int arr2[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             arr1[j] += (i + 1) * (i + 1) * (i + 1) * (arr[i][j] - '0');
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             arr1[] += (i + 1) * (i + 1) * (i + 1) * (arr[i][j] - '0');
//         }
//     }
//     set<int> s1;

//     for (int i = 0; i < m; i++)
//     {
//         s1.insert(arr1[i]);
//     }
//     set<int> s2;
//     for (int i = 0; i < n; i++)
//     {
//         s1.insert(arr2[i]);
//     }

//     if (s1.size()< 3 && s2.size() < 3)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }

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

#include <stdio.h>
int main()
{
    //write your code from here
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int red, blue, green;
        scanf("%d %d %d", &red, &blue, &green);
        if (red > 255 || red < 0 || blue > 255 || blue < 0 || green > 255 || green < 0)
        {
            printf("INVALID\n");
            continue;
        }
        printf("#%.2x%.2x%.2x", red, blue, green);
        printf("\n");
    }
    return 0;
}
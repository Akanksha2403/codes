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
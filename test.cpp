#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    unordered_map<int,int> vec; 
    for (size_t i = 0; i < 10; i++)
    {
        vec[i] = i+1;   
    }


    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

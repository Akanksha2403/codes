#include <bits/stdc++.h>
using namespace std;
int main()
{
    string code;
    cout << "Enter the Message bits : "; cin >> code;
    int m = code.length(), r = 1;
    while (pow(2, r) < (m + r + 1)) r++;
    vector<int> hamming_code(m + r);
    for (int i = 0; i < r; i++)
        hamming_code[pow(2, i) - 1] = -1;
    int j = 0;
    for (int i = 0; i < (r + m); i++)
    if (hamming_code[i] != -1){ hamming_code[i] = code[j] - '0'; j++;}
    int one_count = 0;
    for (int i = 0; i < (r + m); i++)
    {
        if (hamming_code[i] != -1)
            continue;
        one_count = 0;
        int x = log2(i + 1);
        for (int j = i + 2; j <= (r + m); j++)
        {
            if ((j & (1 << x)) && (hamming_code[j - 1] == 1))
                one_count++;
        }
        if (one_count % 2 == 0)
            hamming_code[i] = 0;
        else
            hamming_code[i] = 1;
    }
    cout << "Hamming Code : ";
    for (int i = 0; i < r + m; i++) cout << hamming_code[i] << " "; cout << "\n";
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

long func()
{
    long attack, health, monsters;
    cin >> attack >> health >> monsters;
    long m_attack[monsters], m_fights[monsters];
    for (long i = 0; i < monsters; i++)
    {
        cin >> m_attack[i];
    }
    for (long i = 0; i < monsters; i++)
    {
        long a;
        cin >> a;
        if (a % attack == 0)
        {
            m_fights[i] = a / attack;
        }
        else
        {
            m_fights[i] = a / attack + 1;
        }
    }
    for (long i = 0; i < monsters - 1; i++)
    {
        health -= m_fights[i] * m_attack[i];
    }
    health -= (m_fights[monsters - 1] - 1) * (m_attack[monsters - 1]);
    if (health < 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        return 0;
    }
    return 0;
}

int main()
{
    //write your code from here
    long test_case;
    cin >> test_case;
    while (test_case--)
    {
        func();
    }

    return 0;
}
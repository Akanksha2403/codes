#include <bits/stdc++.h>

using namespace std;
// int trans(int &attack, int &health, int &m_attack, int &m_health)
// {
//     int num = m_health / attack;
//     health = health - m_attack * num;
//     m_health = m_health - attack * num;
//     if (m_health > 0)
//     {
//         health = health - m_attack;
//         m_health = m_health - attack;
//     }
//     return 0;
// }
int func()
{
    int attack, health, monsters;
    cin >> attack >> health >> monsters;
    int m_attack[monsters], m_health[monsters];
    for (int i = 0; i < monsters; i++)
    {
        cin >> m_attack[i];
    }
    for (int i = 0; i < monsters; i++)
    {
        int a;
        cin >> a;
        if (a % attack == 0)
        {
            m_health[i] = a / attack;
        }
        else
        {
            m_health[i] = a / attack + 1;
        }
        m_health[i] = m_health[i] * m_attack[i];
    }

    for (int i = 1; i < monsters; i++)
    {
        m_health[0] += m_health[i];
    }
    if (m_health[0] <= health|| (health - (m_health[0] - m_attack[monsters])) < 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;

    // for (int i = 0; i < monsters - 1; i++)
    // {
    //     trans(attack, health, m_attack[i], m_health[i]);
    //     if (health < 1)
    //     {
    //         cout << "NO\n";
    //         return 0;
    //     }
    // }
    //code for killing last monster

    // int num = health / m_attack[monsters - 1];
    // health = health - m_attack[monsters - 1] * num;
    // m_health[monsters - 1] = m_health[monsters - 1] - attack * num;

    // if (health > 0)
    // {
    //     health = health - m_attack[monsters - 1];
    //     m_health[monsters - 1] = m_health[monsters - 1] - attack;
    // }

    // if (m_health[monsters - 1] > 0)
    // {
    //     cout << "NO\n";
    //     return 0;
    // }
    // cout << "YES\n";
    // return 0;
}

int main()
{
    //write your code from here
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        func();
    }

    return 0;
}
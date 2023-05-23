#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, balance, i, movement;
    cin >> size >> balance;
    int total = balance;
    int lower = balance;
    for(i = 0; i < size; i++)
    {
        cin >> movement;
        total += movement;
        if(total < lower)
            lower = total;
    }
    cout << lower << endl;
}
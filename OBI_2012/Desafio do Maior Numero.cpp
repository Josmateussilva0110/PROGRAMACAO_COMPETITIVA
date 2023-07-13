#include <bits/stdc++.h>

using namespace std;

int main()
{
    int upper = -1, num;
    while(true)
    {
        cin >> num;
        if(num == 0)
            break;
        if(num > upper)
            upper = num;
    }
    cout << upper << endl;
}
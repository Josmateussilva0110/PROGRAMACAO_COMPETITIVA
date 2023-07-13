#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, vice;
    cin >> a >> b >> c;
    if(a > b && a > c)
    {
        if(b > c)
            vice = b;
        else
            vice = c;
    }
    if(b > a && b > c)
    {
        if(a > c)
            vice = a;
        else
            vice = c;
    }
    if(c > b && c > a)
    {
        if(b > a)
            vice = b;
        else
            vice = a;
    }
    cout << vice << endl;
}
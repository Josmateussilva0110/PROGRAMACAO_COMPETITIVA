#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, cont = 0;
    cin >> n >> m;
    double result = 0;
    while(true)
    {
        result += n * 2;
        if(result < m)
        {
            cont++;
        }
        result += n * 3;
        if(result < m)
        {
            cont++;
        }
        result += n / 2;
        if(result < m)
        {
            cont++;
        }
        result += n / 3;
        if(result < m)
        {
            cont++;
        }
        result += n + 7;
        if(result < m)
        {
            cont++;
        }
        result += -7;
        if(result < m)
        {
            cont++;
        }
        if(result >= m)
            break;
    }
    cout << cont << endl;
}
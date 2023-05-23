#include <iostream>

using namespace std;

int main()
{
    int a, b, sum = 0, i, first, end;
    cin >> a;
    cin >> b;
    if(a < b)
    {
        first = a;
        end = b;
    }
    else
    {
        first = b;
        end = a;
    }
    for(i = (first+1); i < end; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << endl;
            sum += i;
        }
    }
    cout << sum << endl;
}
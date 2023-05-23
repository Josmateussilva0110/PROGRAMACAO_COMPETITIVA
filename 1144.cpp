#include <iostream>

using namespace std;

int main()
{
    int value, i, tot, tot2;
    cin >> value;
    for(i = 1; i <= value; i++)
    {
        tot = i * i;
        tot2 = i * tot;
        cout << i << " " << tot << " " << tot2 << endl;
        cout << i << " " << tot+1 << " " << tot2+1 << endl;
    }
}
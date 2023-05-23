#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, code, choice;
    double value, bigger = 0; 
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        cin >> code >> value;
        if(value > bigger)
        {
            bigger = value;
            choice = code;
        }
    }
    if(bigger >= 8.0)
        cout << choice << endl;
    if(bigger < 8.0)
        cout << "Minimum note not reached" << endl;
}
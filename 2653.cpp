#include <bits/stdc++.h>

using namespace std;

int main() 
{
    vector<string> l;
    string n;
    int c2 = 0;
    while(cin >> n)
    {
        if (find(l.begin(), l.end(), n) == l.end()) 
        {
            l.push_back(n);
            c2 += 1;
        }
    }
    cout << c2 << endl;
    return 0;
}

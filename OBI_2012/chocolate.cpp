#include <bits/stdc++.h>

using namespace std;

int main()
{
    int piece;
    cin >> piece;
    int sun = 1;
    while(piece >= 2)
    {
        sun *= 4;
        piece /= 2;
    }
    cout << sun << endl;
}

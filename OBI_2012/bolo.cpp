#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, cont = 0;
    cin >> a >> b >> c;
    int result = min({a/2, b/3,c/5});
    cout << result << endl;
}
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
 
    double a, b, result, result2;
    cin >> a >> b;
    result = b * 100;
    result2 = (result / a) - 100;
    cout << fixed << setprecision(2);
    cout << result2 << "%" << endl;
    return 0;
}
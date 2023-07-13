#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    int H, L;

    cin >> A >> B >> C;
    cin >> H >> L;

    bool valid = false;

    if ((A <= H && B <= L) || (A <= L && B <= H))
    {
        valid = true;
    }
    else if ((A <= H && C <= L) || (A <= L && C <= H))
    {
        valid = true;
    }
    else if ((B <= H && C <= L) || (B <= L && C <= H))
    {
        valid = true;
    }

    if (valid)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}

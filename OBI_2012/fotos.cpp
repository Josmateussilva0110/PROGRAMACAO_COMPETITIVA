#include <iostream>

using namespace std;

bool possible(int X, int Y, int L1, int H1, int L2, int H2) 
{
    if ((L1 + L2 <= X) && max(H1, H2) <= Y) {
        return true;
    }

    if (max(L1, L2) <= X && (H1 + H2 <= Y)) {
        return true;
    }

    return false;
}

int main() 
{
    int X, Y, L1, H1, L2, H2;
    cin >> X >> Y >> L1 >> H1 >> L2 >> H2;
    if (possible(X, Y, L1, H1, L2, H2))
        cout << "S" << endl;
    else 
        cout << "N" << endl;
}

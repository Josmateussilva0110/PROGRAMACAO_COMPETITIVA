#include <iostream>

using namespace std;

int main() 
{
    int L, D, K, P, custo;
    cin >> L >> D >> K >> P;
    custo = (K * L) + (L / D) * P;
    cout << custo << endl;
}
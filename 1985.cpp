#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size, code, amount, i;
    float sum = 0;
    cin >> size;
    for(i = 0; i < size; i++)
    {
        cin >> code >> amount;
        if(code == 1001)
            sum += 1.50 * amount;
        if(code == 1002)
            sum += 2.50 * amount;
        if(code == 1003)
            sum += 3.50 * amount;
        if(code == 1004)
            sum += 4.50 * amount;
        if(code == 1005)
            sum += 5.50 * amount;
    }
    cout << fixed << setprecision(2);
    cout << sum << endl;
}
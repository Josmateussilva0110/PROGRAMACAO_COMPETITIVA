#include <iostream>

using namespace std;

int main()
{
    int value, i = 0;
    cin >> value;
    while(i < 6)
    {
        if(value % 2 != 0)
        {
            cout << value << endl;
            i++;
        }
        value++;
    }
}
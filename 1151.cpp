#include <iostream>

using namespace std;

void fibonacci(int value);

int main()
{
    int value;
    cin >> value;
    fibonacci(value);
}

void fibonacci(int value)
{
    int i, t1 = 0, t2 = 1, t3;
    cout << t1 << " " << t2 << " ";
    for(i = 2; i < value; i++)
    {
        t3 = t1 + t2;
        cout << t3;
        if(i != value - 1)
            cout << " ";
        t1 = t2;
        t2 = t3;
    }
    cout << endl;
}
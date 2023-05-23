#include <iostream>

using namespace std;

void replacement(int *array);


int main()
{
    int array[10], i;
    for(i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    replacement(array);
}

void replacement(int *array)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(array[i] <= 0)
            array[i] = 1;
    }
    for(i = 0; i < 10; i++)
    {
        cout << "X[" << i << "]" << " = " << array[i] << endl;
    }
}
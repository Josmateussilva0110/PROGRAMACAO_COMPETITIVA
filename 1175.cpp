#include <iostream>

using namespace std;
void charge(int *array);

int main()
{
    int array[20], i;
    for(i = 0; i < 20; i++)
    {
        cin >> array[i];
    }
    charge(array);
}

void charge(int *array)
{
    int i, j = 0;
    for(i = 20 -1 ; i >= 0; i--)
    {
        cout << "N[" << j << "]" << " = " << array[i] << endl;
        j++;
    }
}
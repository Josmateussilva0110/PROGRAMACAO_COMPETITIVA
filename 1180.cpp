#include <iostream>

using namespace std;

void lowest_number(int *array, int size);

int main()
{
    int size, i;
    cin >> size;
    int array[size];
    for(i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    lowest_number(array, size);
}

void lowest_number(int *array, int size)
{
    int smaller, position, i;
    smaller = array[0];
    for(i = 0; i < size; i++)
    {
        if(array[i] < smaller)
        {
            smaller = array[i];
            position = i;
        }
    }
    cout << "Menor valor: " << smaller << endl;
    cout << "Posicao: " << position;
}
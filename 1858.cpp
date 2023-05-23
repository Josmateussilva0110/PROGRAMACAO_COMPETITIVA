#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, i, min, posi = 0;
    cin >> size;
    int array[size];
    for(i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    min = array[0];
    for(i = 0; i < size; i++)
    {
        if(array[i] < min && array[i] != array[i + 1])
        {
            min = array[i];
            posi = i;
        }
    }
    cout << posi+1 << endl;
}
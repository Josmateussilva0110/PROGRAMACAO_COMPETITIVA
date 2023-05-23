#include <bits/stdc++.h>

using namespace std;

void peaks_and_valleys(int *array, int size);

int main() 
{
    int size, i;
    cin >> size;
    int array[size];
    for(i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    peaks_and_valleys(array, size);
}

void peaks_and_valleys(int *array, int size)
{
    bool valid = true;
    int i;
    if(array[0] > array[1])
        valid = false;
    else
    {
        bool cresc = true;
        for(i = 1; i < size -1; i++)
        {
            if(cresc)
            {
                if(array[i] >= array[i+1])
                {
                    if(array[i] == array[i+1])
                    {
                        valid = false;
                        break;
                    }
                }
                else
                    cresc = false;
            }
            else
            {
                if(array[i] <= array[i+1])
                {
                    valid = false;
                    break;
                }
            }
        }
    }
    if(valid)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
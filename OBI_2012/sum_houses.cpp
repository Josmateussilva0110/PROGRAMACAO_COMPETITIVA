#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector <int> numbers(size);
    for(int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    int k;
    cin >> k;
    int i = 0, j = size -1;
    while(i < j)
    {
        if(numbers[i] + numbers[j] == k)
        {
            cout << numbers[i] << " " << numbers[j] << endl;
            return 0;
        }
        else if (numbers[i] + numbers[j] < k)
            i++;
        else
            j--;
    }
}
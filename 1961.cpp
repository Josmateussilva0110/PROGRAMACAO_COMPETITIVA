#include <bits/stdc++.h>

using namespace std;

int main()
{
    int jump, size, diference, j;
    bool valid = true;
    cin >> jump >> size;
    int values[size];
    for(int i = 0; i < size; i++)
    {
        cin >> values[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(i < 2)
        {
            diference = abs(values[i] - values[i+1]);
            if(diference > jump)
            {
                valid = false;
                break;
            }
        }
        else
        {
            for(j = 2; j < size -1; j++)
            {
                diference = abs(values[j] - values[j+1]);
            }
            if(diference > jump)
            {
                valid = false;
                break;
            }
        }
        j += 2;
    }
    if(valid)
        cout << "YOU WIN" << endl;
    else    
        cout << "GAME OVER" << endl;
}
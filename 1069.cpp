#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, i, j, pa, t, tam;
    char array[1001];
    cin >> size;
    for(i = 0; i < size; i++)
    {
        cin >> array;
        pa = 0;
        t = 0;
        tam = strlen(array);
        for(j = 0; j < tam; j++)
        {
            if(array[j] == '<')
                pa += 1;
            if(array[j] == '>' && pa > 0)
            {
                pa -= 1;
                t += 1;
            }
        }
        cout << t << endl;
    }
}
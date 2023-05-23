#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue <int> fila;
    queue <int> fila2;
    int value, i;
    while(true)
    {
        cin >> value;
        if(value == 0)
            break;
        if(value <= 50)
        {
            for(int i = 1; i <= value; i++)
            {
                fila.push(i);
            }
            cout << "Discarded cards:";
            while(fila.size() > 1)
            {
                cout << " " << fila.front();
                fila.pop();
                fila.push(fila.front());
                fila.pop();
                if(fila.size() > 1)
                {
                    cout << ",";
                }
            }
            cout << endl;
            cout << "Remaining card: " << fila.front() << endl;
        }
        else
            break;
    }
}   
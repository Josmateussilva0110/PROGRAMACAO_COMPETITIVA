#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    int size;
    cin >> size;
    stack <int> pilha;
    multiset<int> fila;
    for(int i = 0; i < size; i++)
    {
        string operation;
        cin >> operation;
        if(operation == "PUSH")
        {
            int value;
            cin >> value;
            pilha.push(value);
            fila.insert(value);
        }
        if(operation == "MIN")
        {
            if(pilha.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                cout << *fila.begin() << endl;
            }
        }
        if(operation == "POP")
        {
            if(pilha.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                fila.erase(fila.find(pilha.top()));
                pilha.pop();
            }
        }
    }
}

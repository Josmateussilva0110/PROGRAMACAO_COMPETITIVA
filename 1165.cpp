#include <iostream>

using namespace std;

void prime(int size);

int main()
{
    int size;
    cin >> size;
    prime(size);
}

void prime(int size)
{
    int i, j, cont, value;
    for(i = 0; i < size; i++)
    {
        cont = 0;
        cin >> value;
        for(j = 1; j <= value; j++)
        {
            if(value % j == 0)
                cont++;
        }
        if(cont == 2)
            cout << value << " eh primo" << endl;
        else
            cout << value << " nao eh primo" << endl;
    }
}
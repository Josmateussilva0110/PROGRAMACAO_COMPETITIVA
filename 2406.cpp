#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, i;
    cin >> size;
    char expression[100001];
    char open[] = {"([{"};
    char close[] = {")]}"};
    for(i = 0; i < size; i++)
    {
        int cont = -1;
        int valid = 1;
        cin >> expression;
        int tam = strlen(expression);
        int aux[tam];
        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(expression[i] == open[j])
                    aux[++cont] = expression[i];
                else if(expression[i] == close[j])
                {
                    if(cont == -1 || aux[cont] != open[j])
                    {
                        valid = 0;
                        break;
                    }
                    cont--;
                }
            }
        }
        if(valid && cont == -1)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
}

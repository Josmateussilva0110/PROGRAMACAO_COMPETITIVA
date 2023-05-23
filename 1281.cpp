#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, i;
    cin >> size;
    for(i = 0; i < size; i++)
    {
        int qnt;
        cin >> qnt;
        map<string, double> prices;
        for(int j = 0; j < qnt; j++)
        {
            string product;
            double price;
            cin >> product >> price;
            prices[product] = price;
        }
        int p;
        cin >> p;
        double total = 0;
        for(int j = 0; j < p; j++)
        {
            string product;
            int quantity;
            cin >> product >> quantity;
            total += prices[product] * quantity;
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << total << endl;
    }
}
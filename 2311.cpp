#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    int i, size, j, k;
    float Weight, grades[7], bigger, smaller, new_grades[5], sum, result;
    cin >> size;
    for(i = 0; i < size; i++)
    {
        sum = 0;
        cin >> name;
        cin >> Weight;
        for(j = 0; j < 7; j++)
        {
            cin >> grades[j];
        }
        bigger = grades[0];
        smaller = grades[0];
        for(j = 0; j < 7; j++)
        {
            if(grades[j] > bigger)
                bigger = grades[j];
            if(grades[j] < smaller)
                smaller = grades[j];
        }
        k = 0;
        for(j = 0; j < 7; j++)
        {
            if(grades[j] > smaller && grades[j] < bigger)
            {
                new_grades[k] = grades[j];
                k++;
            }
        }
        for(j = 0; j < 5; j++)
        {
           sum += new_grades[j];
        }
        result = sum * Weight;
        cout << fixed << setprecision(2);
        cout << name << " " << result << endl; 
    }
}
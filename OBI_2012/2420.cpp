#include <bits/stdc++.h>

using namespace std;

int point(vector<int> & points)
{
    int size = points.size();
    int sun = 0;
    for(int i = 0; i < size; i++)
    {
        sun += points[i];
    }
    int left = 0;
    int division = -1;
    for(int i = 0; i < size; i++)
    {
        left += points[i];
        if(left == sun - left)
        {
            division = i + 1;
            break;
        }
    }
    return division;
}

int main()
{
    int size;
    cin >> size;
    vector <int> points(size);
    for(int i = 0; i < size; i++)
    {
        cin >> points[i];
    }
    int result = point(points);
    cout << result << endl;
}
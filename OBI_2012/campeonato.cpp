#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> time1(3);
    vector <int> time2(3);
    for(int i = 0; i < 3; i++)
    {
        cin >> time1[i];
    }
    for(int i = 0; i < 3; i++)
    {
        cin >> time2[i];
    }
    int points_time1 = time1[0] * 3;
    int result_time1 = points_time1 + time1[1];
    int points_time2 = time2[0] * 3;
    int result_time2 = points_time2 + time2[1];
    if(result_time1 > result_time2)
        cout << "C" << endl;
    else if(result_time1 < result_time2)
        cout << "F" << endl;
    else if(result_time1 == result_time2 && time1[2] == time2[2])
        cout << "=" << endl;
    else if(result_time1 == result_time2 && time1[2] > time2[2])
        cout << "C" << endl;
    else
        cout << "F" << endl;
}
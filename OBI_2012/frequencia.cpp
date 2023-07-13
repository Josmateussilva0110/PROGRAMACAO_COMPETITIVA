#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int size;
    cin >> size;
    int cont = size;
    vector<int> frequency(size);
    for (int i = 0; i < size; i++) 
    {
        cin >> frequency[i];
    }

    unordered_map<int, int> frequencyCount;
    for (int i = 0; i < size; i++) 
    {
        frequencyCount[frequency[i]]++;
    }

    int duplicateCount = 0;
    cout << "valores:" << endl;
    for (const auto& pair : frequencyCount)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    for (const auto& pair : frequencyCount) 
    {
        if (pair.second > 1) 
        {
            duplicateCount += pair.second - 1;
        }
    }
    int result = cont - duplicateCount;
    cout << result << endl;
}

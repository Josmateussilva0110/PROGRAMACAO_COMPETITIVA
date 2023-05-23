#include <bits/stdc++.h>

using namespace std;

int countRectangles(vector<int>& sequence, int K) 
{
    unordered_map<int, int> prefixSumCount;
    int currentSum = 0;
    int count = 0;
    for (int i = 0; i < sequence.size(); i++) 
    {
        currentSum += sequence[i];
        if (currentSum == K)
            count++;
        if (prefixSumCount.find(currentSum - K) != prefixSumCount.end())
            count += prefixSumCount[currentSum - K];
        prefixSumCount[currentSum]++;
    }
    return count;
}

int main() 
{
    int N, K;
    cin >> N >> K;
    vector<int> sequence(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> sequence[i];
    }
    int result = countRectangles(sequence, K);
    cout << result << endl;
}

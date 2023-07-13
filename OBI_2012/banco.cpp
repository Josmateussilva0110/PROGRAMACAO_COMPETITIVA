#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int numCaixas, numClientes;
    cin >> numCaixas >> numClientes;
    
    int result = 0;
    int current_time = 0;
    
    for (int i = 0; i < numClientes; i++) 
    {
        int input, duration;
        cin >> input >> duration;
        
        int expected_time = current_time - input;
        if (expected_time < 0) 
        {
            expected_time = 0;
        }
        if (expected_time > 20) 
        {
            result++;
        }
        
        if (current_time <= input) 
        {
            current_time = input;
        }
        current_time += duration;
    }
    cout << result << endl;
}

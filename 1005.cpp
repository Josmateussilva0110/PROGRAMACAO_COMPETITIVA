#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double a, b, average;
    cin >> a >> b;
    average = ((a * 3.5) + (b * 7.5)) / 11;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;
}
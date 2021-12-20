#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int N , x, sum = 0; // N = number of elements , x = stores the value of each ele , sum is summary

    cout << "who many elements you would like to enter?\n";

    // input N
    cin >> N;

    // input the eles

    for (int i = 1; i <= N; i++) {
        cout << "enter the element number " << i << endl;
        cin >> x;
        sum = sum + x;
    }

    // claculating

    float A = sum / N;
    float sd = sqrt(A);

    // output

    cout << "A = " << A << endl;
    cout << "sd = " << sd << endl;
    
    return 0;
}


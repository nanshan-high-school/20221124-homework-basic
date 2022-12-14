#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, sum = 0;
    cin >> a >> b >> c >> d;
    
    if (a <= 2)
        sum += 20;
    else
        sum += 20 + (a - 2) * 5;
    
    sum += b * 60 / 120 * 5;

    while (d >= 19 && d <= 23 && d > c) {
        sum += (d + d - 1) / (2 * 1.0) * 10;
        d -= 1;
    }
    
    cout << sum << endl;
}

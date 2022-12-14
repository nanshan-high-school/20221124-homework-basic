#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f;
    cin >> d;
    
    for (int i = 0; i < d; i++) {
        cin >> e >> f;
        if (abs(a - e) <= b) {
            if (f <= c) 
                a = e;
            else
                if (a - e > 0)
                    a += 15;
                else
                    a -= 15;
        }
    }
    cout << a << endl;
}

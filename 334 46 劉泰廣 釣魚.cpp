#include <iostream>
using namespace std;

int main() {
    int x, y, n, a, b, c = 99999999;
    cin >> x >> y >> n;
    for (int i = 0; i < n; i++) {
        int d, e, f;
        cin >> d >> e;
        f = (x-a) * (x-a) + (y-b) * (y-b);
        if (f < c) {
            c = f;
            a = d;
            b = e;
        }
        
    }
    cout << a << " " << b << endl;
}

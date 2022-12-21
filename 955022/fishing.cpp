#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int N;
    cin >> N;

    int minLengthLength = 999999; // > 250000
    int minA, minB;

    for (int i = 1; i <= N; i++) {
        int A, B;
        cin >> A >> B;

        int CC;
        CC = ((A - X) * (A - X)) + ((B - Y) * (B - Y));

        if (CC < minLengthLength) {
            minLengthLength = CC;
            minA = A;
            minB = B;
        }
    }

    cout << minA << " " << minB;
}
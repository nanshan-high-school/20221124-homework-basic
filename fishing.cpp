#include <iostream>
using namespace std;

int main() {
  int X, Y, N, A, B;
    cin >> X >> Y;
    cin >> N;
    int minlengthlength = 999999;
    int minA, minB;
    while (int i = 1; i <= N; i++){
        cin >> Ai >> Bi;

        int CC;
        CC = ((A - X) * (A - X)) + ((B - Y) * (B - Y));

        if (CC < minlengthlength){
            int CC = minlengthlength;
            minA = A;
            minB = B;
        }
    }
    cout << minA << " " << minB;
}
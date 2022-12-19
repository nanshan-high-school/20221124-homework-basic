#include <iostream>
using namespace std;

int main() {
    
    int X, R, V, N, P, S;
    cin >> X >> R >> V >>N;
    int i = 0;
    
    while (i < N){
        
        cin >> P >> S;
        
        if (S > V){
            if (P > X){
                X -= 15;
            }
            else {
                X += 15;
            }
        }
        
        else {
            if (P - X < 15 || X - P < 15){
                X = P;
            }
        }

        i++;
    }
    cout << X;
}

#include <iostream>
using namespace std;
int main() {
    int X, Y, account[100], i, total;
    
    for (int i = 0; i <= 100; i ++){
        account[i] = 0;
    }
   
    do {
        cin >> X >> Y;
        
        if (X == 1){
            account[Y] ++;
        }
        else {
            account[Y] = 0;
        }
    } while (X != -1 && Y != -1);

    total = 0;
    for (int i = 0; i <= 100; i ++){
        total += account[i];
    }

    cout << total;
     
}
#include <iostream>
using namespace std;
int main() {
    int K , W , S , E , T;
    
    cin >> K >> W >> S >> E;

    T = 20; //基本車資
    
    if (K > 2){
        T += (K - 2) * 5;
    } //里程費

    if (W > 0){
        T += int(W / 2)  * 5;
    } //等待加成

    if (S <= 18 && E >= 19){
        T += 185;
    }
    
    if (S <= 19 && E >= 20){
        T += 195;
    }
    
    if (S <= 20&& E >= 21){
        T += 205;
    }
    
    if (S <= 21 && E >= 22){
        T += 215;
    }
    
    if (S <= 22 && E >= 23){
        T += 225;
    } //夜間加成

    cout << T;
    
}
    
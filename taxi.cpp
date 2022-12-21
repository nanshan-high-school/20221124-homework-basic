#include <iostream>
using namespace std;

int main() {
    int k;
    int total;
    int total0;
    cin >> k;
    if (k <= 2){
        total0 = 20;
    }
    if (k > 2){
        int kms;
        kms = (k-2) * 5;
        total0 = 20 + kms;
    }
    int w;
    cin >> w;
    int time;
    int total1;
    if (w % 2 == 0){
        total1 = 5 * (w / 2);
    }
    if (w % 2 != 0){
        int a;
        a = w - 1;
        total1 = 5 * a;
    }
    int s, e;
    cin >> s >> e;
    int total2 = 0;
    if (s <= 18 && e >= 19) {
        total2 += 185;
    }
    if (s <= 19 && e >= 20) {
        total2 += 195;
    }
    if (s <= 20 && e >= 21) {
        total2 += 205;
    }
    if (s <= 21 && e >= 22) {
        total2 += 215;
    }
    if (s <= 22 && e >= 23) {
        total2 += 225;
    }
    total = total0 + total1 + total2;
    cout << total;
}
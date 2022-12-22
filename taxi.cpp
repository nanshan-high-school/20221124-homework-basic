#include <iostream>
using namespace std;

int main() {
    int K, W, S, E;
    cin >> K >> W >> S >> E;

    // 計程運價：起程 2 公里內皆為 20 元，續程每滿 1 公里加 5 元。
    int ans1;

    if (K <= 2) {
        ans1 = 20;
    } else {
        ans1 = 20 + (K - 2) * 5;
    }

    // 延滯計時運價：延滯時間每滿 2 分鐘加 5 元。
    int ans2;

    ans2 = (W / 2) * 5;

    // 夜間加成運價
    int ans3 = 0;

    // 晚間 18 時至 19 時 185 元
    if (S <= 18 && E >= 19) {
        ans3 += 185;
    }
    
    // 晚間 19 時至 20 時 195 元
    if (S <= 19 && E >= 20) {
        ans3 += 195;
    }
    
    // 晚間 20 時至 21 時 205 元
    if (S <= 20 && E >= 21) {
        ans3 += 205;
    }
    
    // 晚間 21 時至 22 時 215 元
    if (S <= 21 && E >= 22) {
        ans3 += 215;
    }
    
    // 晚間 22 時至 23 時 225 元
    if (S <= 22 && E >= 23) {
        ans3 += 225;
    }

    cout << ans1 + ans2 + ans3; 
}
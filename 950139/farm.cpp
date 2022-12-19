#include <iostream>
using namespace std;
int main() {
    int N, x[100], y[100], R, L, i, t_rain, t_light, bloom;
    
    cin >> N;
    i = 0;
    
    while (i < N){
        cin >> x[i] >> y[i];
        
        i++;
    }
    cin >> R >> L;
    
    i = t_rain = t_light = bloom = 0;
    
    while (i < N){
        t_rain += x[i];
        t_light += y[i];
        
        i++;

        if (t_rain >= R && t_light >= L){
            bloom = i + 1;
            break;
        }
    }

    if (bloom == 0){
        cout << "-1";
    }
    else {
        cout << bloom;
    }

}

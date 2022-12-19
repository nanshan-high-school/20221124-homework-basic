#include <iostream>
using namespace std;
int main() {
    int x , y;
    cin >> x >> y;
    
    int N = 0;
    cin >> N;

    int fish[N][2] , d , min[2];
    int M = 9999999;
    
    for (int i = 0 ; i < N ; i++){
        cin >> fish[i][0] >> fish[i][1];
        
        d = (fish[i][0] - x) * (fish[i][0] - x) + (fish[i][1] - y) * (fish[i][1] - y);
        
        if ( M > d){
            min[0] = fish[i][0];
            min[1] = fish[i][1];
        }
        
    }   
    cout <<  min[0] << " " << min[1] << "\n";
    

    
}
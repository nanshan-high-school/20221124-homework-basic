#include <iostream>
using namespace std;
int main() {
  int x , y , A , B , N , i , l , AA , BB;
  l=1000000000;
  cin >> x >> y;
  cin >> N;
  for(i=0 ; i < N ; i++) {
    cin >> A >> B;
    if( (x-A)*(x-A)+(y-B)*(y-B) < l){
      l=(x-A)*(x-A)+(y-B)*(y-B);
      AA=A;
      BB=B;  
    }
  } 
  cout << AA << ' ' << BB;
}
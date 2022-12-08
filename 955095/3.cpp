#include <iostream>
using namespace std;
int main() {
  int guy,reach,splimit,speed,times,ball;
  cin>>guy>>reach>>splimit;
  cin>>times;
  for (int i=0;i<times;i++){
    cin>>ball>>speed;
    if (ball<=guy+reach and ball>=guy-reach){
      if (speed<splimit)
        guy=ball;
      else if (ball>=guy)
        guy-=15;
      else
        guy+=15;
    }
  }
  cout<<guy;
}
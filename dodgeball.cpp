#include <iostream>
using namespace std;
int main() {
  int X,R,V,N,i,P,S;
  cin >> X;
  cin >> R;
  cin >> V;
  cin >> N;
  for(i=1 ; i <= N ; i+=1)
    {
    cin >> P;
    cin >> S;
    if(P > (X-R) && P < (X+R) && S <= V)
      {
      X=P;
      }
    else if(P > (X-R) && P < (X+R) && S > V)
      {  
      if(P > X)
        {
        X-=15;
        }                     
      if(P < X)
        {
        X+=15;
        }
      }
    else if(P > (X+R) && P < (X-R))
      {
      X+=0;
      }
    }
  cout << X;
}
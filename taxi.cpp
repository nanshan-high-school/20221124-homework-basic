#include <iostream>
using namespace std;
int main() {
  int K,W,S,E,price;
  price = 0 ;
  cin >> K ;
  cin >> W ;
  cin >> S ;
  cin >> E ;
  
  if(K <= 2)
  {
    price += 20;
  }else if(K > 2)
  {
    price += (20 + ((K - 2) * 5));
  }
  
  if(W >= 2)
  {
    price += (5 * (W / 2));
  }
  
  if(S <= 18 && E >= 19)
  {
    price += 185;
  }
    
  if(S <= 19 && E >= 20)
  {
    price += 195;
  }
    
  if(S <= 20 && E >= 21)
  {
    price += 205;
  }
    
  if(S <= 21 && E >= 22)
  {
    price += 215;
  }

  if(S <= 22 && E >= 23)
  {
    price += 225;
  }

  cout << price;
}
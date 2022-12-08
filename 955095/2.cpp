#include <iostream>
using namespace std;
int main() {
  int km,min,up,down,total,udm;
  total=20;
  cin>>km>>min>>up>>down;
  if (km>2)
    total+=5*(km-2);
  total+=5*(min/2);
  if (up<18)
    up=18;
  udm=185+(up-18)*10;
  for (int i=up;i<down;i++){
    total+=udm;
    udm+=10;
  }
  cout<<total;
}
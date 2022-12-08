#include <iostream>
using namespace std;

int main() {
    int km,total,up,down,money,min;
    total=20;
    cin>>km>>up>>down>>money>>min;
    if(km>2)
     total+=5*(km-2);
    total+=5*(min/2);
    if(up<18)
     up=18;
    money=185+(up-18)*10;
   for(int i=up;i<down;i++){
     total+=money;
     money+=10;
     }
     cout<<total;
      }
 
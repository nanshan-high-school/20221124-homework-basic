#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int x,y,spot,fx,fy;
  cin >>x>>y>>spot;
  fx=600;
  fy=600;
  int a[spot],b[spot];
  for (int i=0;i<spot;i++)
    cin>>a[i]>>b[i];
  for (int i=0;i<spot;i++){
    if (pow(a[i]-x,2)+pow(b[i]-y,2)<pow(fx-x,2)+pow(fy-y,2)){
      fx=a[i];
      fy=b[i];
    }
  }
  cout<<fx<<" "<<fy;
}
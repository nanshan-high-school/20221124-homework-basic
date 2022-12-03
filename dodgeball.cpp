#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;
int main() {
  int x,r,v,n,i,a;
  cin >> x >> r >> v;
  cin >> n;
  int p,s;
  for(i=0;i<n;i++){
    cin >> p >> s;
    a=0;
    if(abs(p-x)>r){
      continue;
    }
    if(abs(p-x)<=r && s<=v){
      a=p-x;
    }
    if(p==x && s>v && abs(p-x)<=r){
      a-=15;
    }
    if(abs(p-x)<=r && s>v && p>x){
      a-=15;
    }
    if(abs(p-x)<=r && s>v && p<x){
      a+=15;
    }
    x+=a;
  }
  cout << x;
}
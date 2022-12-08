#include <iostream>
using namespace std;
int main() {
  int k , w , s , e , total;
  cin >> k >> w >> s >> e;
  total=20;
  
  if(k>2){
    total=total+(k-2)*5;
  }
  total=total+(w/2)*5;

   if(s<18 && e>18){
    total=total+185;
    if(e>19){
       total=total+195;
    }
     if(e>20){
       total=total+205;
    }
     if(e>21){
       total=total+215;
    }
     if(e>22){
       total=total+225;
    }  
  }
  
  if(s==18){
    total=total+185;
    if(e-s>=2){
     total=total+195;
    }
    if(e-s>=3){
       total=total+205;
    }
    if(e-s>=4){
       total=total+215;
    }
    if(e-s>=5){
       total=total+225;
    }
  }
  
  if(s==19){
    total=total+195;
    if(e-s>=2){
     total=total+205;
   }
    if(e-s>=3){
     total=total+215;
   }
    if(e-s>=4){
     total=total+225;
   }
  }
  
  if(s==20){
    total=total+205;
    if(e-s>=2){
     total=total+215;
   }
    if(e-s>=3){
     total=total+225;
   }
  }
  if(s==21){
    total=total+215;
    if(e-s>=2){
     total=total+225;
    }
  }
  if(s==22){
    total=total+225;
  }
  cout << total;
  
}
#include <bits/stdc++.h> 
using namespace std;
 
int main(){
  int price; int coin; int shovels = 0; int bank;
 
  cin>>price>>coin;
  bank = price;
 

  while(coin != (bank %10)){
    if (bank % 10 == 0){
      break;
    }
    bank += price;
    shovels +=1;
  }
  cout<<shovels+1;
}
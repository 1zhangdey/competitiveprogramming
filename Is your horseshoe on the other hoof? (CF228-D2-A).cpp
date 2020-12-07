#include <bits/stdc++.h> 
using namespace std;

int main(){
  int horseShoe[4];
  int bank = 0;

  for(int i = 0; i <4; i++){
    cin>>horseShoe[i];
  }

 for(int i = 0; i <4; i++){
     for(int j = i+1; j <4; j++){
      if(horseShoe[i] == horseShoe[j]){
        bank+=1;
      }
  }
  }
  if(bank == 3){
    bank =2 ;
  } else if (bank >3){
    bank-=3;
  }

  cout<<bank;
}
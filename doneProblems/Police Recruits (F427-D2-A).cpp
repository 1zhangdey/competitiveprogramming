#include <bits/stdc++.h> 
using namespace std;

int main(){
  int x; int y; int police = 0; int score = 0;
  cin>>x;
  for(int i =0;i<x;i++){
    cin>>y;
    if(y > 0){
      police+=y;
    } else{
      if(police<1){
      score++;
    }else{
      police--;
      }
    }
  }
  cout<<score;
  return 0;
}


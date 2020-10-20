#include <bits/stdc++.h> 
using namespace std;



int main(){
int lengthOfArray;
cin>>lengthOfArray;
int arr[lengthOfArray];

for(int i = 0; i<lengthOfArray; i++){
  cin>>arr[i];
}

int s_crawler = 0; 
int d_crawler = lengthOfArray -1;
int s_score = 0;
int d_score = 0;
int turn = 0;
int max = 0;

while(s_crawler<=d_crawler){
  if(arr[s_crawler]>arr[d_crawler]){
    max = arr[s_crawler];
    s_crawler++;
  } else{
    max = arr[d_crawler];
    d_crawler--;
  }
  if(turn%2==0){
    d_score +=max;
  }else{
    s_score +=max;
  }
  turn++;
}
cout<<d_score<<" "<<s_score;
}


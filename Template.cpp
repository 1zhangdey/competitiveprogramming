#include <bits/stdc++.h> 
using namespace std;

int main(){

int n,b,d,x;
int count = 0; int waste = 0;
cin>>n>>b>>d;

for(int i = 0; i<n; i++){
  cin>>x;
  if(x<=b){
    count += x;
  }if(count>d){
    waste+=1;
    count = 0;
  }
}
cout<<waste;
}
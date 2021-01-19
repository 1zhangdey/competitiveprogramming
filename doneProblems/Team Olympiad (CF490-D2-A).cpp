#include <bits/stdc++.h> 
using namespace std;
 
int main(){
  int n;
  cin>>n;
  std::vector< int > x;
  std::vector< int > y;
  std::vector< int > z;
  int length, element;

  
  for(int i = 0;i<n;i++){
    cin>>element;
    if(element == 1){
      x.push_back(i+1);
    }else if(element == 2){
      y.push_back(i+1);
    }else{
      z.push_back(i+1);
    }
  }
length = min(x.size(), min(y.size(),z.size()));
cout<<length<<endl;

  for(int i = 0;i<length; i++){
    cout<<x[i]<<" " << y[i]<< " " << z[i]<<endl;
  }
}
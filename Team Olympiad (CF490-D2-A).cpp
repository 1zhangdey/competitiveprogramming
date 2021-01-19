#include <bits/stdc++.h> 
using namespace std;
 
int main(){
  int n;
  int arr[n];
  string x = ""; string y = ""; string z = "";
  int length, element;
  cin>>n;
  
  for(int i = 0;i<n;i++){
    cin>>element;
    if(element == 1){
      x += to_string(i+1);
    }else if(element == 2){
      y += to_string(i+1); 
    }else{
      z += to_string(i+1);
    }
  }
length = min(x.length(), min(y.length(),z.length()));
cout<<length<<endl;
 
  for(int i = 0;i<length; i++){
    cout<<x[i]<<" " << y[i]<< " " << z[i]<<endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4}, arrFinal[4] ={};
    string flipper, stringSlice;
    cin>>flipper;
    for(int i = 0;i<flipper.length();i++){
        stringSlice = flipper[i];
        if(stringSlice == "H"){
                arrFinal[0] = arr[2];
                arrFinal[1] = arr[3];
                arrFinal[2] = arr[0];
                arrFinal[3] = arr[1];
        }else{
            arrFinal[0] = arr[1];
            arrFinal[1] = arr[0];
            arrFinal[2] = arr[3];
            arrFinal[3] = arr[2];

        }
        memcpy(arr,arrFinal,sizeof arr);

    }
    cout<<arrFinal[0]<<" "<< arrFinal[1]<<"\n"<<arrFinal[2]<<" "<< arrFinal[3]<<"\n";


}
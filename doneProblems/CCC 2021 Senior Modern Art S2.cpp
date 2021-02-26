//passed sample test cases, but no points. Didnt work

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,count,total= 0;
    char choice; int number;
    cin>>m>>n;
    char arr[m][n];
    for(int i = 0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 'B';
        }
    }
    cin>>count;
    for(int i = 0;i<(count);i++) {
        cin >> choice >> number;
        if (choice == 'R') {
            for (int i = 0; i < n; i++) {
                if (arr[i][number] == 'B') {
                    arr[i][number] = 'G';
                } else {
                    arr[i][number] = 'B';
                }
            }
        } else {
            for (int i = 0; i < m; i++) {
                if (arr[number][i] == 'B') {
                    arr[number][i] = 'G';
                } else {
                    arr[number][i] = 'B';
                }
            }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j] == 'G'){
                total++;
            }
        }
    }
    cout<<(total);
}
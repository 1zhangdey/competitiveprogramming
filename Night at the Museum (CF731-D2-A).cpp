#include <bits/stdc++.h> 
using namespace std;

int main(){
  string word;
  int count = 1;
  int difference;
  cin>>word;

  for(int i = 1; i<word.length();i++){
    difference = abs(word[i]-word[i-1]);
    if(difference > 13){
      count += (26 - difference);
    }
    else{
      count += difference;
    }
  }
  cout<<count;
}

#include <bits/stdc++.h> 
using namespace std;

int main1(){
	string a;
	cin >> a;
	int g = 0;
	int sum = 0;
	for (int i = 0; i < a.size(); i++){
		int b = abs(g - int(a[i] - 'a'));
		sum += min(b, 26 - b);
		g = a[i] - 'a';
	}
	cout << sum;
}


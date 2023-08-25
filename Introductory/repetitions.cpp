#include<bits/stdc++.h>
using namespace std;
// sliding window
int main(){
	string str;
	cin >> str;
	int n = str.size();
	int i = 0, j = 0;
	int mx = INT_MIN;
	while(j<n){
		if(str[i] == str[j]){
			j++;
		}
		else{
			i = j;
		}
		mx = max(mx, j-i);
	}
	cout << mx;
	return 0;
}
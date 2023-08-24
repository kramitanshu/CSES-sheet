#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	vector<ll> arr;
	for(int i = 0; i<n; i++){
		ll x;
		cin >> x;
		arr.push_back(x);
	}

	ll moves = 0;
	ll mn = arr[0], j = 0;
	while(j<n){
		if(arr[j] - mn >= 0){
			mn =  max(mn, arr[j]);
			j++;
		}
		else{
			moves += mn - arr[j];
			j++;
		}
	}

	cout << moves << endl;

	return 0;
}
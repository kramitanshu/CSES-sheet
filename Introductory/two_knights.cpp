#include<bits/stdc++.h>
using namespace std;

#define ll long long int
void solve(ll n){
	if(n == 1){
		cout << "0" <<endl;
		return;
	}
	ll total_space = ((n * n)*(n*n - 1))/2;
	ll attack = 4 * (n-1)*(n-2);

	if(attack > 0){
		cout << total_space - attack << endl;
		return;
	}
	cout << total_space << endl;
}

int main(){

	int n;
	cin >> n;
	for(int i = 1; i<=n; i++){
		ll n = 1LL*i;
		solve(n);
	}

	return 0;
}
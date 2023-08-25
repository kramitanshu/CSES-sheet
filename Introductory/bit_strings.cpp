#include<bits/stdc++.h>
using namespace std;

// Try modular exponentiation 

int main(){
	int n;
	cin >> n;
	const int mod = 1e9 + 7;
	long long ans = 1;
	for(int i = 1; i<=n; i++){
		ans = (ans%mod * 2)% mod;
	}
	cout << ans << endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int main(){

	ll n;
	cin >> n;

	ll cnt5 = 0;
	for(ll i = 1; i<=n; i++){
		ll num = i;
		while(num%5 == 0){
			num /= 5;
			cnt5++;
		}
	}

	cout << cnt5 << endl;
}
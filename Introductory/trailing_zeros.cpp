#include<bits/stdc++.h>
using namespace std;


#define ll long long int
int main(){

	ll n;
	cin >> n;

	ll cnt5 = 0;
	while(n >= 5){
		n /= 5;
		cnt5 += n;
	}

	cout << cnt5 << endl;
}
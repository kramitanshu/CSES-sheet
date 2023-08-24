#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;

	while(t--){
		int y, x;
		cin >> y >> x;
		ll ans = 1;
		if(y >= x){
			if(y&1){
				ans = 1LL*(y-1)*(y-1) + x;
			}else{
				ans = 1LL*y*y - x + 1;
			}
		}
		else{
			if(x&1){
				ans = 1LL*x*x - y + 1;
			}else{
				ans = 1LL*(x-1)*(x-1) + y;
			}
		}
		cout << ans << endl;
	}
	return  0;
}
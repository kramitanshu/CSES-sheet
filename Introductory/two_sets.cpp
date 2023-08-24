#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int sum = 0;
	for(int i = 1; i<=n; i++){
		sum += i;
	}
	if(sum%2 != 0) cout << "NO\n";
	else{
		vector<int> ans1, ans2;
		ans1.push_back(1);
		ans1.push_back(2);

		int sum1 = 3, sum2 = 0;
		for(int i = 3; i<=n; i++){
			if(sum1%2 == 0 && i%2 != 0){
				sum1 += i;
				ans1.push_back(i);
			}
			else if(sum1%2 != 0 && i%2 == 0){
				sum1 += i;
				ans1.push_back(i);
			}
			else if(sum2%2 == 0 && i%2 != 0){
				sum2 += i;
				ans2.push_back(i);
			}
			else if(sum2%2 != 0 && i%2 == 0){
				sum2 += i;
				ans2.push_back(i);
			}
		}


		cout << "YES\n";
		cout << ans1.size() << endl;
		for(auto it: ans1){
			cout << it << " ";
		}
		cout << endl;
		cout << ans2.size() << endl;
		for(auto it: ans2){
			cout << it << " ";
		}

	}
	return 0;

}
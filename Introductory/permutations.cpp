#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, vector<int> &ans){
	int n = arr.size();
	for(int i = 2; i<=n; i+=2){
		ans.push_back(i);
	}
	for(int i = 1; i<=n; i+=2){
		ans.push_back(i);
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i = 1; i<=n; i++){
		arr.push_back(i);
	}

	vector<int> ans;
	solve(arr, ans);

	bool flag = true;
	int i = 0, j = i+1;
  while(j<n){
		if(abs(ans[i]-ans[j]) == 1) {
			flag = false;
			cout << "NO SOLUTION\n";
			break;
		}
		i++, j++;
	}
	if(flag == true){
		for(auto it: ans){
			cout << it << " ";
		}
	}

	return 0;
}


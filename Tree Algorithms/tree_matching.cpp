#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n;
	cin >> n;
	map<int, int> mp;
	vector<pair<int,int> > edges;
	for(int i = 0; i<n-1; i++){
		pair<int,int> input;
		cin >> input.first >> input.second;

		mp[input.first]++, mp[input.second]++;
		edges.push_back(input);
	}

	int cnt = 0;
	for(auto it: mp){
		if(it.second == 1) cnt++;
	}

	if(cnt%2 == 0) cout << cnt/2;
	else cout << (cnt/2)+1;
	return 0;
}
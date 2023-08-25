#include<bits/stdc++.h>
using namespace std;
// Power of XOR operation
int main(){

	int n;
	cin >> n;
	vector<int> arr;
	int num = 0;
	for(int i = 1; i<n; i++){
		int x;
		cin >> x;
		num = num^i^x;
		arr.push_back(x);
	}

	num = num^n;
	cout << num;
	return 0;
}
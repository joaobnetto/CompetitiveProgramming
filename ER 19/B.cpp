#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector < int > v(n);
	int sum = 0, pos, neg;
	pos = neg = INT_MAX;
	for(int i = 0;i < n;i++){
		cin >> v[i];
		if(v[i] >= 0) sum += v[i];
		if(v[i] >= 0 && v[i] % 2 == 1) pos = min(v[i], pos);
		else if(v[i] % 2 == -1) neg = min(-1*v[i],neg);
	}
	// cout << pos << neg << endl;
	if(sum % 2 == 1){
		cout << sum << endl;
		// return 0;
	}
	else{
		sum = max(sum-pos, sum-neg);
		cout << sum << endl;
	}
}
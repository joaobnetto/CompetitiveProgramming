#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int tempo = 240-k;
	vector < int > pref;
	pref.push_back(0);
	for(int i = 1;i <= 20;i++){
		pref.push_back(pref[i-1]+5*i);
	}
	auto x = lower_bound(pref.begin(), pref.end(), tempo);
	if(*x > tempo) x--;
	// cout << *x << endl;
	cout << min((int)(x-pref.begin()), n) << endl;
}
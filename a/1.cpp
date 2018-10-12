#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector < int > v(n);
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	for(int i = 0;i < n;i++){
		int d1 = max(v[i]-v[0], v[n-1]-v[i]), d2;
		if(i == 0){
			d1 = v[n-1]-v[i];
			d2 = v[i+1]-v[i];
		}
		else if(i == n-1){
			d1 = v[i]-v[0];
			d2 = v[i]-v[i-1];
		}
		else d2 = min(v[i+1]-v[i],v[i]-v[i-1]);
		cout << d2 << " " << d1 << endl;
	}
}
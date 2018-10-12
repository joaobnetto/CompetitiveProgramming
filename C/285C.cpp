#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, count = 0;
	cin >> n;
	vector < long long int > v(n);
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(long long int i = 1;i <= n;i++){
		count += fabs(v[i-1]-i);
	}
	cout << count << endl;
}
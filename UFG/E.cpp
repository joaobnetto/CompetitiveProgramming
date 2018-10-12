#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n;
	bool flag = false;
	double sum1 = 1, sum2 = 1;
	for(int i = 0;i < n;++i){
		cin >> x;
		if(x == 0){
			sum1 = 0;
		}
		else sum1 += log(x);
	}
	for(int i = 0;i < n;++i){
		cin >> x;
		if(x == 0){
			sum2 = 0;
		}
		else sum2 += log(x);
	}
	// cout << sum1 << " " << sum2 << endl;
	if(sum1 > sum2) cout << "A\n";
	else cout << "B\n";
}
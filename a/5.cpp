#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, x, count = 0, tmp = -1;
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		cin >> x;
		if(i < k && x > 0){
			count++;
		}
		else if(i == k && x > 0){
			count++;
			tmp = x;
			// cout << i << endl;
		}
		else if(x > 0 && i > k && tmp == x){
			count++;
		}
	}
	cout << count << endl;
}
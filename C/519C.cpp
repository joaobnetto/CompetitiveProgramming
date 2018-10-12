#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int count = 0;
	if(n < 1 || m < 1 || n+m < 3){
		cout << 0 << endl;
		return 0;
	}
	while(n >= 0 && m >= 0){
		if(n > m){
			n -= 2;
			m--;
			count++;
		}
		else{
			m -= 2;
			n--;
			count++;
		}
		if(n < 1 || m < 1 || n+m < 3) break; 
	}
	cout << count << endl;
}
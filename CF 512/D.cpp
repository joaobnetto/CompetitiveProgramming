#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, m, k;
	cin >> n >> m >> k;
	double area = n*m/k, area1 = 2*area;
	for(int i = 2;i*i <= area1;i++){
		if(area % i == 0){
			long long int tmp = area1/i;

			// cout << area1 << " " << tmp << endl;
			if(i <= n && tmp <= m){
				cout << "YES\n";
				cout << "0 0\n";
				cout << i << " " << 0 << endl;
				cout << 0 << " " << tmp << endl;
				return 0;
			}
			else if(i <= m && tmp <= n){
				cout << "YES\n";
				cout << "0 0\n";
				cout << 0 << " " << i << endl;
				cout << tmp << " " << 0 << endl;
				return 0;
			}
		}
	}
	cout << "NO\n";

}
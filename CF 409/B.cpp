#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	string k = "";
	for(int i = 0;i < a.size();++i){
		// cout << a[i] << " " << b[i] << endl;
		if(a[i] == b[i]){
			if(b[i] == 'z'){
				k += a[i];
			}
			else k += (a[i]+1);
		}
		else if(a[i] < b[i]){
			cout << -1 << endl;
			return 0;
		}
		else if(a[i] > b[i]){
			k += b[i];
		}
	}
	cout << k << endl;
}
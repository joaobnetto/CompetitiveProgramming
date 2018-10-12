#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	string tmp1, s = "";
	cin >> tmp1;
	for(int i = 0;i < tmp1.size();i++){
		if(tmp1[i] != '0') s += tmp1[i];
	}
	if(s.size() == 0){
		cout << "YES\n";
		return 0;
	}
	int sum = 0, tmp;
	for(int i = 0;i < s.size()-1;i++){
		bool flag = true;

		sum += (s[i]-'0');
		tmp = 0;

		int j = i+1;
		// cout << sum << " ";
		while(j < s.size()){
			tmp += (s[j]-'0');
			// cout << tmp << " ";
			if(tmp > sum){
				flag = false;
				break;
			}
			else if(tmp == sum && j < s.size()-1){
				tmp = 0;
			}
			j++;
		}
		// cout << tmp << " ";
		// cout << endl;
		if(tmp != sum) flag = false;
		if(flag){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
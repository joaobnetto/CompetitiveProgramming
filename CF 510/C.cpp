#include <bits/stdc++.h>

using namespace std;

// Multiplico 0 por si mesmo e removo.
// Se tiver numero impar de negativos, removo o menor ou multiplico por 0.

 
int main(){
	int n;
	cin >> n;
	long long int x;
	vector < long long int > v, v0, v1;
	long long int mini = INT_MAX, indxm = 0;
	for(int i = 0;i < n;i++){
		cin >> x;
		if(x < 0){
			v1.push_back(i+1);
			if(x*-1 < mini){
				mini = x*-1;
				indxm = i+1;
			}
		}
		else if(x == 0){
			v0.push_back(i+1);
		}
		else{
			v.push_back(i+1);
		}
	}
	int j = 0;
	bool flag = false, tenho1 = false;
	if(v1.size() % 2 != 0){
		if(v0.size()) cout << "1 " << indxm << " " << v0[0] << endl;
		else cout << "2 " << indxm << endl;
		flag = true;
	}
	int last = 0;
	while(j < (int)(v1.size())-1){
		if(v1[j] == indxm && flag){
			j++;
			continue;
		}
		cout << "1 " << v1[j] << " " << v1[j+1] << endl;
		tenho1 = true;
		last = v1[j+1];
		j++;
	}
	if(v.size() && tenho1) cout << "1 " << last << " " << v[0] << endl;
	j = 0;
	while(j < (int)(v0.size())-1){
		cout << "1 " << v0[j] << " " << v0[j+1] << endl;
		j++;
	}
	if(v0.size() && (tenho1 || v.size())) cout << "2 " << v0[j] << endl;
	j = 0;
	while(j < (int)(v.size())-1){
		cout << "1 " << v[j] << " " << v[j+1] << endl;
		j++;
	}

}
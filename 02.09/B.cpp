#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n, s, x;
	cin >> n >> s;
	vector < int > v;
	for(int i = 0;i < n;i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int count = 0;
	if(v[v.size()/2] == s){
		cout << 0 << endl;
		return 0;
	}
	else if(v[v.size()/2] < s){
		count = s - v[v.size()/2]; 
		for(int i = v.size()/2+1;i < v.size();i++){
			if(v[i] < s) count += s-v[i];
			else break;
		}
	}else if(v[v.size()/2] > s){
		count = v[v.size()/2] - s; 
		for(int i = v.size()/2-1;i >= 0; i--){
			if(v[i] < s) count += v[i]-s;
			else break;
		}
	}
	cout << count << endl;
}
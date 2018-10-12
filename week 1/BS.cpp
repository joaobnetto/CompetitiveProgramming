#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m;
		cin >> n;
		int x;
		vector < int > v;
		vector < int > v1[10010];
		for(int i = 0;i < n;i++){
			cin >> x;
			v.push_back(x);
			v1[x].push_back(i+1);
		}
		sort(v.begin(), v.end());
		for(int i = 0;i < v.size();i++){
			int tmp = m-v[i];
			auto t = lower_bound(v.begin(),v.end(),tmp);
			if(*t == tmp){
				if(v[i] == *t){
					cout << min(v1[v[i]][0], v1[v[i]][1]) << " " << max(v1[v[i]][0], v1[v[i]][1]);
				}
				else{
					cout << min(v1[v[i]][0], v1[*t][0]) << " " << max(v1[*t][0], v1[v[i]][0]);
				}
				cout << endl;
				break;
			}
		}
	}
}
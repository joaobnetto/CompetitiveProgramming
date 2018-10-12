#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector < int > v(n);
	priority_queue < int > pq, tmp;
	for(int i = 0;i < v.size();++i){
		cin >> v[i];
		pq.push(v[i]);
	}
	for(int i = 0;i < v.size();++i){
		if(v[i] == pq.top()){
			cout << v[i];
			pq.pop();
		}
		else{
			tmp.push(v[i]);
			// cout << v[i] << " OI";
		}
		// if(!tmp.empty())cout << pq.size() << tmp.size();
		while(!pq.empty() && !tmp.empty() && pq.top() <= tmp.top()){
			// cout << "OI";
			cout << " " << tmp.top();
			tmp.pop();
			pq.pop();
		}
		cout << endl;
	}
}
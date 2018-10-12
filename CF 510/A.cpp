#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, mini, maxi;
	priority_queue < int  > pq;
	priority_queue < int , vector < int >, greater < int > > pq2;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		pq.push(x);
		pq2.push(x);
	}
	maxi = pq.top() + m;
	while(m--){
		int tmp = pq2.top();
		pq2.pop();
		pq2.push(tmp+1);
	}
	mini = 0;
	while(!pq2.empty()){
		mini = max(pq2.top(), mini);
		pq2.pop();
	}
	cout << mini << " " << maxi << endl;
}
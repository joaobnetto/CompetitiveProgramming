#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n;
	queue < int > a, b;
	int k;
	cin >> k;
	for(int i = 0;i < k;++i){
		cin >> x;
		a.push(x);
	}
	cin >> k;
	for(int i = 0;i < k;++i){
		cin >> x;
		b.push(x);
	}
	for(int i = 0;i < 5000000;++i){
		if(a.front() > b.front()){
			a.push(b.front());
			a.push(a.front());
			a.pop();
			b.pop();
		}
		else{
			b.push(a.front());
			b.push(b.front());
			a.pop();
			b.pop();
		}
		if(a.empty()){
			cout << i+1 << " 2\n";
			return 0;
		}
		else if(b.empty()){
			cout << i+1 << " 1\n";
			return 0;
		}
	}
	cout << "-1\n";
}
#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;

vector < int > primes;
int pp[MAXN];
vector < int > v;

void fatorar(int j){
	for(int i = 2;i <= 3;++i){
		while(v[j] % i == 0) v[j] /= i;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n;
	// n = 100000;
	for(int i = 0;i < n;++i){
		cin >> x;
		v.push_back(x);
		// v[i] = rand()%1001;
	}
	v.resize(n);
	sort(v.begin(), v.end());
	for(int i = 0;i < v.size();++i){
		fatorar(i);
	}
	for(int i = 1;i < v.size();++i){
		if(v[i] != v[i-1]){
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
}
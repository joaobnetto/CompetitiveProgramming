#include <bits/stdc++.h>

using namespace std;

long long int dp[100010];
vector < long long int > v;
map < int , int > m;

long long int resposta(int i){
	// cout << i << endl;
	if(i >= v.size()) return 0;
	else if(dp[i] != -1) return dp[i];

	long long int x = m[v[i]]*v[i], y = -INT_MAX;
	if(i < v.size()-1 && v[i+1]-1 == v[i]){
		x += resposta(i+2);
	}
	if(i < v.size()-1 && v[i+1]-1 != v[i]){
		y = m[v[i]]*v[i]+resposta(i+1);
	}
	else y = resposta(i+1);
	// cout << i << " " << x << " " << y << endl;
	return dp[i] = max(x,y);

}

int main(){
	int x, n;
	cin >> n;
	memset(dp,-1,sizeof(dp));
	for(int i = 0;i < n;i++){
		cin >> x;
		if(!m[x]++) v.push_back(x);
	}
	sort(v.begin(), v.end());
	// cout << v.size() << endl;
	cout << resposta(0) << endl;
}
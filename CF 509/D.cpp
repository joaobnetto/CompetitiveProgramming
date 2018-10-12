#include <bits/stdc++.h>
#define MAX 1000000000

using namespace std;

vector < pair < int , int > > v;
int prefix[200010];

long int solve(int i, int h){
	long int x = v[i].first, start = x, end = h;

}

int main(){
	ios::sync_with_stdio(false);
	int n, h, x, y;
	cin >> n >> h;
	for(int i = 0;i < n;i++){
		cin >> x >> y;
		v.push_back({x,y});
	}
	prefix[0] = 0;
	for(int i = 0;i < n;i++){
		prefix[i+1] = prefix[i] + (v[i].second - v[i].first);
	}
	long int resposta = -INT_MAX;
	for(int i = 0;i < n;i++){
		resposta = max(resposta, solve(i, h));
	}
}
#include <bits/stdc++.h>

using namespace std;
map < pair < int, pair < pair < int , int > , pair < int , int > > >, int > m;
vector < pair < int , int > > v;
const int N = 52;
int dp[N][N][N];
bool used[N][N][N];
int n;

int solve(int truck1, int truck2, int order){
	if(order > n){
		return 0;
	}

	if(used[truck1][truck2][order]){
		return dp[truck1][truck2][order];
	}

	used[truck1][truck2][order] = 1;

	dp[truck1][truck2][order] = min(solve(order, truck2, order + 1) + dis(truck1, order), solve(truck1, order, order) + dis(truck2, order));

	return dp[truck1][truck2][order];
}

int knap(int i1, int j1, int i2, int j2, int k){
	if(k >= v.size()) return 0;
	pair < int , int > p1 = {i1,j1}, p2 = {i2,j2};
	if(m[{k, {min(p1,p2), max(p1,p2)}}]) return m[{k, {min(p1,p2), max(p1,p2)}}];
	int ans = min((knap(v[k].first,v[k].second, i2, j2, k+1) + fabs(v[k].first - i1) + fabs(v[k].second - j1)),
		(knap(i1,j1, v[k].first, v[k].second, k+1) + fabs(v[k].first - i2) + fabs(v[k].second - j2)));
	return m[{k, {min(p1,p2), max(p1,p2)}}] = ans;
}

int main(){
	ios::sync_with_stdio(false);
	int n, x, y;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x >> y;
		v.push_back({x, y});
	}
	int dist = knap(0,0,0,0,0);
	cout << dist << " blocks traveled." << endl;
}
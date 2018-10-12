#include <bits/stdc++.h>

using namespace std;
vector < long int > v;
long long int tree[100010], m, maximo = -INT_MAX;

void build(int node, int start, int end){
	if(start == end){
		tree[node] = v[start] % m;
	}
	else{
		int mid = (start+end) / 2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = (tree[2*node] + tree[2*node+1]) % m;
	}
}

long long int soma(int start, int end){
	if(start == end){
		return tree[node];
	}
	else{
		int mid = (start+end)/2;
		long long int soma_left = soma(start, mid);
		long long int soma_right = soma(mid+1, end);
	}
}

int main(){
	ios::sync_with_stdio(false);
	int t, x;
	cin >> t;
	while(t--){
		long int n;
		v.clear();
		memset(tree,0,sizeof(tree));
		maximo = -INT_MAX;
		cin >> n >> m; 
		for(int i = 0;i < n;i++){
			cin >> x;
			v.push_back(x);
		}
		build(1, 0, n);
	}
}
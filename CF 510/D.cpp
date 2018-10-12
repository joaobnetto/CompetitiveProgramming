#include <bits/stdc++.h>

using namespace std;
long long int t, v[200010], tree[1000010], cnt = 0;

void build(int node, int start, int end){
	if(start == end){
		tree[node] = v[start];
		if(v[start] < t) cnt++;
	}
	else{
		int mid = (start+end) / 2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = tree[2*node] + tree[2*node+1];
		cout << node << " " << tree[node] << endl;
		if(tree[node] < t) cnt++;
	}
}

int main(){
	int n;
	cin >> n >> t;
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	build(1, 0, n-1);
	cout << cnt << endl;
}
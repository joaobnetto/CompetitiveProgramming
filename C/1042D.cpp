#include <bits/stdc++.h>

using namespace std;

struct Node{
	int id;
	vector < long long int > s;
};

Node node[1000010];

vector < long long int > v;


void build(int id, int start, int end){
	Node tmp;
	if(start == end){
		tmp.id = id;
		tmp.s.push_back(v[start]);
		node[id] = tmp;
	}
	else{
		int mid = (start+end)/2;
		build(2*id, start, mid);
		build(2*id+1, mid+1, end);
		tmp.id = id;
		int i = 0, j = 0;
		while(i < node[2*id].s.size() && j < node[2*id+1].s.size()){
			if(node[2*id].s[i] < node[2*id+1].s[j]){
				node[id].s.push_back(node[2*id].s[i++]);
			}
			else{
				node[id].s.push_back(node[2*id+1].s[j++]);
			}
		}
		while(i < node[2*id].s.size()){
			node[id].s.push_back(node[2*id].s[i++]);
		}
		while(j < node[2*id].s.size()){
			node[id].s.push_back(node[2*id+1].s[j++]);
		}
	}
}

long long int query(int id, int start,int end,int l, int r, long long int x){
	if(l <= start && end <= r){
		// cout << start << " " << end << " " << l << " " << r << x << endl;
		long long int res = lower_bound(node[id].s.begin(), node[id].s.end(), x) - node[id].s.begin();
		return res;
 
	}
	else if(start > r || end < l) return 0;
	int mid = (start+end)/2;
	return query(2*id, start, mid, l, r, x) + query(2*id+1,mid+1, end,l,r,x);
}

int main(){
	ios::sync_with_stdio(false);
	long long int n, x, t;
	cin >> n >> t;
	v.push_back(0);
	for(int i = 0;i < n;i++){
		cin >> x;
		v.push_back(v[i] + x);
		// cout << v[i] << " ";
	}
	// cout << v[n] << endl;
	build(1, 0, n);
	long long int ans = 0;
	for(int i = 1;i <= n;i++){
		// Quero encontrar pra determinado i, quais são os J de i+1 até n que são maiores 
		// que ele
		ans += query(1, 0, n, i, n, v[i-1]+t);
	}
	cout << ans << endl;
}
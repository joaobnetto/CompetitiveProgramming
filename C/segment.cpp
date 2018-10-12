#include <bits/stdc++.h>


// Precisa de ser um vetor ordenado, pois o set não é contiguo.
// Segment tree que retorna valores menores que x num intervalo determinado.


using namespace std;

struct Node{
	int id;
	vector < long long int > s;
};

Node node[500010];

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
		vector < long long int > t;
		t = node[2*id].s;
		for(int i = 0;i < t.size();i++){
			node[id].s.push_back(t[i]);
		} 
		t = node[2*id+1].s;
		for(int i = 0;i < t.size();i++){
			node[id].s.push_back(t[i]);
		} 
		sort(node[id].s.begin(), node[id].s.end());
	}
}

long long int query(int id, int start,int end,int l, int r, long long int x){
	if(l <= start && end <= r){
		// cout << start << " " << end << " " << l << " " << r << x << endl;
		return lower_bound(node[id].s.begin(), node[id].s.end(), x) - node[id].s.begin();
 
	}
	else if(start > r || end < l) return 0;
	int mid = (start+end)/2;
	return query(2*id, start, mid, l, r, x) + query(2*id+1,mid+1, end,l,r,x);
}

int main(){
	int n, x, t;
	cin >> n >> t;
	v.push_back(0);
	for(int i = 0;i < n;i++){
		cin >> x;
		v.push_back(v[i] + x);
		// cout << v[i] << " ";
	}
	// cout << v[n] << endl;
	build(1, 0, n);
	int ans = 0;
	for(int i = 1;i <= n;i++){
		// Quero encontrar pra determinado i, quais são os J de i+1 até n que são maiores 
		// que ele
		ans += query(1, 0, n, i, n, v[i-1]+t);
	}
	cout << ans << endl;
}
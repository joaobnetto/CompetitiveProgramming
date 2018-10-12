#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	int x;
	vector < pair < int, string > > v;
	while(n--){
		cin >> x >> s;
		v.push_back({x,s});
	}
	sort(v.begin(), v.end());
	int preco[7], mk[3];
	memset(mk, 0, sizeof(mk));
	for(int i = 0;i < 7;i++) preco[i] = 100000000; 
	for(int i = 0;i < v.size();i++){
		if(v[i].second == "A") preco[0] = min(preco[0], v[i].first);
		else if(v[i].second == "B") preco[1] = min(preco[1], v[i].first);
		else if(v[i].second == "C") preco[2] = min(preco[2], v[i].first);
		else if(v[i].second == "AB" || v[i].second == "BA") preco[3] = min(preco[3], v[i].first);
		else if(v[i].second == "BC" || v[i].second == "CB") preco[4] = min(preco[4], v[i].first);
		else if(v[i].second == "AC" || v[i].second == "CA") preco[5] = min(preco[5], v[i].first);
		else if(v[i].second == "ABC" || v[i].second == "BAC" || v[i].second == "ACB" 
			|| v[i].second == "BCA" || v[i].second == "CAB" || v[i].second == "CBA") preco[6] = min(preco[6], v[i].first);
		for(int j = 0;j < v[i].second.size();j++){
			mk[v[i].second[j] - 'A']++;
		}
	}
	for(int j = 0;j < 3;j++){
		if(mk[j] == 0){
			cout << -1 << endl;
			return 0;
		}
	}
	int res1 = preco[0] + preco[1] + preco[2],
	res2 = preco[0] + preco[4], res3 = preco[6], res4 = preco[1] + preco[5], 
	res5 = preco[2] + preco[3], res6 = preco[3] + preco[4], res7 = preco[4] + preco[5],
	res8 = preco[3] + preco[5];
	cout << min(res1, min(res2, min(res3,min(res4,min(res5, min(res6, min(res7, res8))))))) << endl;
}
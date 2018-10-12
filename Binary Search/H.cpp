#include <bits/stdc++.h>
#define pp pair < long long int , long long int >

using namespace std;

int main(){
	long long int n, k, x, y;
	cin >> n >> k;
	vector < pp > v;
	vector < long long int > pref;
	for(int i = 0;i < n;i++){
		cin >> x >> y;
		v.push_back({x, y});
	}
	sort(v.begin(), v.end());
	long long int ans = 0, cum = 0;
	int l = 0, r = 0;
	while(l < n){
		while(r < n){
			if(v[l].first + k <= v[r].first) break;
			// cout << "OI\n";
			cum += v[r].second;
			r++;
		}
		// cout << l << " " << r << " " << cum << endl;
		ans = max(ans, cum);
		cum -= v[l].second;
		l++;
	}
	cout << ans << endl;

}
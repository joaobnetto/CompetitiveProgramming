#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	long long int x;
	bitset < 1000010 > p;
	set < long long int > s;
	for(long long int i = 2;i <= 1000000;i++){
		if(p[i]) continue;
		s.insert(i*i);
		for(int j = i+i;j <= 1000000;j += i) p[j] = 1;
	}
	while(n--){
		scanf("%lld", &x);
		auto k = s.lower_bound(x);
		// cout << *k << endl;
		if(x == *k) cout << "YES\n";
		else cout << "NO\n";
	}
}
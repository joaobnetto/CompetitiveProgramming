#include <bits/stdc++.h>

using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void search(long long n, long long k){
	long long int start = 1, end = n;
	string s;
	int count = 0;
	while(count < 4500){
		long long mid = (start+end)/2;
		if(end-start <= 50){
			long long tmp = rng() % (end-start + 1);
			cout << start+tmp << " " << start+tmp << endl;
			cin >> s;
			if(s == "Yes"){
				return;
			}
			start = max(1LL, start-k);
			end = min(n, end+k);
		}
		else{
			cout << start << " " << mid << endl;
			cin >> s;
			if(s == "Yes"){
				start = max(start-k, 1LL);
				end = min(mid+k, n);
			}
			else{
				start = max(mid-k, 1LL);
				end = min(end+k, n);
			}
		}
		count++;
	}
	assert(count < 4500);
}

int main(){
	ios::sync_with_stdio(false);
	long long int n, k;
	cin >> n >> k;
	search(n, k);
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int ca, cb, pa, pb, u;
	cin >> ca >> cb >> pa >> pb >> u;
	int totala = ca+pa, totalb = cb+pb;
	if(totala + u <= totalb){
		cout << "Candidate A has lost the nomination!\n";
		return 0;
	}
	int start = 0, end = u, k = 0, mid;
	while(start <= end){
		mid = (start+end) / 2;
		if(totala+mid <= totalb + u-mid){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	cout << "Candidate A needs at least " << mid << " of the unpledged superdelegates.\n";
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n;
	vector < int > v1(n);
	for(int i = 0;i < n;i++){
		cin >> v1[i];
	}
	cin >> m;
	vector < int > v2(m);
	for(int i = 0;i < m;i++){
		cin >> v2[i];
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int pt0 = 0, pt1 = 0, count = 0;
	while(pt0 < n && pt1 < m){
		// cout << v1[pt0] << " " << v2[pt1] << endl;
		if(fabs(v1[pt0]-v2[pt1]) <= 1){
			count++;
			pt0++;
			pt1++;
		}
		else if(v1[pt0] < v2[pt1]){
			pt0++;
		}
		else{
			pt1++;
		}
	}
	cout << count << endl;
}
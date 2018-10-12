#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector < int > v;
	for(int i = 0;i < n;++i){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for(int i = 0;i < n;++i){
		cout << v[i] << " ";
	}
	cout << endl;
	int pt0 = 0, pt1 = 1, count = 0;
	map < int , int > m;
	while(pt1 < n){
		if(!m[pt0] && v[pt0]/2 >= v[pt1]){
			cout << v[pt0] << " " << v[pt1] << endl;
			count++;
			m[pt1]++;
			pt1++;
			pt0++;
		}
		else if(pt0 < pt1 && m[pt0]) pt0++;
		else pt1++;
	}
	cout << n-count << endl;
}
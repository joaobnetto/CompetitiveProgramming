#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector < int > v;
	int menor = INT_MAX, idx;
	bool pos = false, zero = false, neg = false;
	int negcount = 0, lp, ln;
	for(int i = 0;i < n;i++){
		cin >> x;
		if(x > 0){
			v.push_back(1);
			pos = true;
			lp = i;
		}
		else if(x == 0) {
			v.push_back(0);
			zero = true;
		}
		else{
			v.push_back(-1);
			if(x*-1 <= menor){
				menor = x*-1;
				idx = i;
			}
			neg = true;
			negcount++;
		}
		// cout << v[i] << endl;
	}
	int j = 0;
	bool nd = false;
	if(pos){
		while(v[j] != 1) j++;
		for(int i = j+1;i < v.size();i++){
			if(v[i] == 1){
				cout << "1 " << j+1 << " " << i+1 << endl;
				j = i;
			}
		}
	}
	if(negcount == 1 && !pos && zero){
		for(int i = 0;i < v.size()-1;i++){
			cout << "1 " << i+1 << " " << i+2 << endl;
		}
		return 0;
	}
	if(!pos && !neg){
		for(int i = 0;i < v.size()-1;i++){
			cout << "1 " << i+1 << " " << i+2 << endl;
		}
		return 0;
	}
	if(negcount % 2 == 1){
		if(zero){
			cout << "1 " << idx+1 << " ";
			for(int i = 0;i < v.size();i++){
				if(v[i] == 0){
					cout << i+1 << endl;
					break;
				}
			}
		}
		else cout << "2 " << idx+1 << endl;
		nd = true;
	}
	j = 0;
	bool fd = false;
	if(neg){
		while(j < v.size() && (nd && j == idx || v[j] != -1)) j++;
		for(int i = j+1;i < v.size();i++){
			if((nd && idx != i && v[i] == -1) || (!nd && v[i] == -1)){
				cout << "1 " << j+1 << " " << i+1 << endl;
				j = i;
				ln = i;
				fd = true;
			}
		}
	}	
	j = 0;
	if(zero){
		while(v[j] != 0) j++;
		for(int i = j+1;i < v.size();i++){
			if(v[i] == 0){
				// cout << i << endl;
				cout << "1 " << j+1 << " " << i+1 << endl;
				j = i;
			}
		}
		cout << 2 << " " << j+1 << endl;
	}
	if(neg && pos && fd){
		cout << "1 " << lp+1 << " " << ln+1 << endl;
	}
}
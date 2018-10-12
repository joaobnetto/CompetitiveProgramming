#include <bits/stdc++.h>

using namespace std;

struct node{
	int dado;
	node *left, *right, *pai;
};

vector < int > v;
vector < char > p1, p2;
bool tr = false;
int x;

node *criar_no(int x, node *pai){
	node *novo = (node*) malloc(sizeof(node));
	novo->dado = x;
	novo->left = novo->right = NULL;
	novo->pai = pai;
	return novo;
}

vector < char > path(node *arvore){
	vector < char > p;
	node *tmp = arvore;
	while(tmp->pai != NULL){
		if(tmp->pai->left == tmp) p.push_back('L');
		else p.push_back('R');
		tmp = tmp->pai;
	}
	tr = true;
	return p;
}

node *cria(node *arvore, int t, int n, node *pai){
	if(t > n) return NULL;
	arvore = criar_no(v[t-1], pai);
	arvore->left = cria(arvore->left, 2*t, n, arvore);
	arvore->right = cria(arvore->right, 2*t+1, n, arvore);
	return arvore;
}

void find(node *arvore){
	if(arvore == NULL) return;
	find(arvore->left);
	if(arvore->dado == x){
		if(tr) p2 = path(arvore);
		else p1 = path(arvore);
	}
	find(arvore->right);
}

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		v.push_back(x);
	}
	cin >> x;
	node *arvore = NULL;
	arvore = cria(arvore, 1, n, NULL);
	find(arvore);
	reverse(p1.begin(), p1.end());
	reverse(p2.begin(), p2.end());
	int i = 0, j = 0;
	while(i < p1.size() && j < p2.size() && p1[i] == p2[j]){
		i++;
		j++;
	}
	string res = "";
	while(i < p1.size()){
		res += 'U';
		i++;
	}
	while(j < p2.size()){
		res += p2[j];
		j++;
	}
	cout << "Path: " << res << endl;
}
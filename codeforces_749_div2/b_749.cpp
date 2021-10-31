#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void init_code(){
	fast_io;
	#ifndef ONLINE_JUDGE
		// fo getting input from input.txt
	freopen("input.txt","r", stdin);
	 // for writing output to output.txt
	freopen("output.txt","w",stdout);
	#endif
}

vector<int> solve(vector<int> v,int n,int st){
	vector<int> res(-1,n);
	int c = 0;
	int check = 0;
	while(check != 2 && c != st){
		for(int i = 0; i < v.size(); i++){
			int cnt = count(v.begin(),v.end(),v[i]);
			res[i] = cnt;
		}
		v = res;
		if(v == res){
			check++;
		}
		c++;
	}
	return res;
}
 
int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int q;
		cin>>q;
		for(int i = 0; i < q; i++){
			int step,ele;
			cin>>step>>ele;
			vector<int> ans = solve(v,n,step);
			cout<< ans[ele-1] << endl;
		}
	}
}
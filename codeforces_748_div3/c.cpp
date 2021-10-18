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
int solve(vector<int> v, int n,int k){
	sort(v.begin(), v.end());
	long long int count  = 0;
	int c = 0;
	int j = k-1;
	int cat = 0;
	int mouse = v[j];
	while(cat <= mouse){
		int val = n-mouse;
		c++;
		j--;
		if(j < 0)
			break;
		cat += val;
		mouse = v[j];

	}
	return c;
}

int main(){
	fast_io;
	init_code();
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		for(int i = 0; i < k; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int ans = solve(v,n,k);
		cout<<ans<<endl;
	}
}
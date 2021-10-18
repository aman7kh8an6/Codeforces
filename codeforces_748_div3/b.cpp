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
int solve(string s){
	int l = s.length();
	int ans = l;
	for(int i = 0; i < l; i++){
		for(int j = i+1; j < l; j++){
			int val = (s[i] - '0')*10 + (s[j]-'0');
			if(val % 25 == 0){
				ans = min(ans,j-i-1 + l-1-j);
			}
		}
	}
	return ans;
}
 
int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		string n;
		cin>>n;
		int ans = solve(n);
		cout<< ans << endl;
	}
}
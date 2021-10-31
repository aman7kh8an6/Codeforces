#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void init_code(){
	fast_io;
	#ifndef ONLINE_JUDGE
		// fo getting input from input.txt
	freopen("input.txt","r", stdin);
	 // for writing output to output.txtb
	freopen("output.txt","w",stdout);
	#endif
}

int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		if(s[0] != s[s.length()-1])
			s[0] = s[s.length()-1];

		cout<< s <<endl;
	}
}

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
// }
// int solve(string s){
	
// }
 
int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		string a = "";
		string b = "";
		char val = 'z';
		int ind = -1;
		for(int i = 0; i < s.length();i++){
			if(s[i] < val){
				val = s[i];
				ind = i;
			}
		}
		s.erase(s.begin() + ind);
		b = s;
		a = val;
		cout<<a<< " "<< b<<endl;
	}
}
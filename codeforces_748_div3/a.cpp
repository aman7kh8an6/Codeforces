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
int solve(int win, int snd, int trd)
{
	int mx = max(win, max(snd,trd));
	if(win == snd && snd == trd){
		return mx-win+1;
	}
	if(win == snd || win == trd){
		return mx-win+1;
	}
	if(win == mx) return 0;
	if( win < mx){
		return mx-win+1;
	}
}

int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		long int a,b,c;
		cin>>a>>b>>c;
		long int x = solve(a,b,c);
		long int y = solve(b,a,c);
		long int z = solve(c,a,b);
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
}
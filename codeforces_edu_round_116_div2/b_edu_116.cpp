#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
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
		ll n,k;
		cin>>n>>k;

		ll computers = 1;
		ll remaining  = n-1;
		ll ans = 0;
		while(computers <= k && remaining > 0){
			remaining -= computers;
			computers += computers;
			ans++;
		}
		if(remaining > 0){
			ans += (remaining + k - 1)/ k;
		}
		cout<<ans<<endl;
	}
}
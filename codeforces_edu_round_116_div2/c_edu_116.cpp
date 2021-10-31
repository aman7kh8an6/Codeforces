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

int power(int x, int y) {
   if (y == 0)
   return 1;
   else if (y%2 == 0)
   return power(x, y/2)*power(x, y/2);
   else
   return x*power(x, y/2)*power(x, y/2);
}

int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		k++;
		vector<ll> values(n+1);
		ll lst = 0;
		for(int i = 0; i < n; i++){
			cin>> values[i];
			lst = values[i];
			values[i] = power(10,values[i]);
		}
		ll val = power(10,lst+1);
		values[values.size() - 1] = val;

		vector<ll> canUses(n);
		for(int i = 0; i < n; i++){
			canUses[i] = (values[i+1]/values[i]) - 1;
		}

		// for(int i = 0; i < n;i++){
		// 	cout<< canUses[i] << " ";
		// }cout<<endl;
		ll ans = 0;
		for(int i = 0; i < n; i++){
			ll use = min(canUses[i],k);
			k -= use;
			ans += use*values[i];
		}
		if( k > 0){
			ans += k* values[n-1];
		}
		cout<<ans<<endl;
	}
}
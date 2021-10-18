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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector<int> arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int solve(vector<int> v, int n)
{
	int mn = 1000002;
	int c = 0;
	for(int i = 0; i < n; i++){
		if(mn >= v[i]){
			mn = v[i];
		}
	}
	for(int i  = 0; i < n-1; i++){
		if( v[i] == v[i+1])
			c++;
	}
	if(c == n-1) return -1;

	vector<int> v1;
	for(int i = 0; i < n; i++){
		if(v[i] != mn)
			v1.push_back(v[i] - mn);
	}
	return findGCD(v1,v1.size());

}

int main(){
	fast_io;
	init_code();
	int t = 0;
	cin >> t;
	while(t--){
		long int n;
		cin>>n;
		vector<int> v;
		for(int i = 0; i < n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		cout<< solve(v,n)<<endl;
	}
}
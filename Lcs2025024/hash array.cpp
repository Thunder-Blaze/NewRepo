#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;

int main() {
    int t;
    cin>>t;
	
	int h[N];
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n]; 
	    for(int i = 0; i<N; i++)
	    {
	        h[i] = 0;
	    }
	        
	    
	    for(int i = 0; i<n; i++)
	    {
	        cin>>a[i]; 
	        h[a[i]]++;
	    }
	    for(int i = 0; i<N; i++)
	    {
	        if(h[i] %2== 1) {cout<<i<<endl; break;}
	    }
	    
	    
	}
}

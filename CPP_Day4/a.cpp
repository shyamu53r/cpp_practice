#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,i,j,x,c,min;
	cin>>t;
	while(t>0)
	{
	    min=1000000000;
	for(i=1;i<=10;i++)
	{
	    long long int a[15];
	    for(j=0;j<15;j++)
	    {
	        cin>>a[j];
	    }
	    sort(a,a+15);
	    x=a[14]-a[0];
	    if(x<=min)
	    {
	        min=x;
	        c=i;
	    }
	}
	cout<<c<<" "<<min<<endl;
	t--;
	}
	return 0;
}

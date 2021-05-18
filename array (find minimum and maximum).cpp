//maximium and minimum element
//author:Prakash kummar

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	int mn = INT_MAX, mx= INT_MIN;//SET min to INT_MAX and max to INT_MIN
	
	//MINIMUM
	for(i=0;i<n;i++)
	{
		if (mn>a[i])//if min is greater than a[i]
		 mn=a[i];//if min is equal to a[i]
		 
	}
	// maximum
	for(i=0;i<n;i++)
	{
		if(mx<a[i])
		mx=a[i];
	}
	 
	 //finally print minimum and maximum
	cout<<""<<mx<<mn<<endl;
	
	return 0;
	
}
//input
//4
//3 4 5 7

//output
// 7 3

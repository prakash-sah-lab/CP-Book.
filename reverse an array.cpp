//reverse an array without using STL
//author :Prakashkumar
#include<bits/stdc++.h>

using namespace std;
int main()
{ 
int n;  //till many n you wanna print
cin>>n;

int a[n],i;
for(i=0;i<n;++i)
cin>>a[i];

i=0;
int j=n-1;// swapping method will take two methods...first pointer will be at index 0 and second pointer toward the last index  
while(i<j)// i is pointing to first element ,j is pointing the last element

{
	swap(a[i],a[j]);// swappint first element to last element ; 2nd element to second last element etc
	i++;//move first poiunter forward
	j--;//move last pointer backward
	
	}
// finally print an array
for(i=0;i<n;++i)
cout<<a[i]<<"";

return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a[] = {1, 4, 20, 3, 10, 5},sum=33;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=i+1;j<n;j++)
		{
			k+=a[j];
			if(a[i]+k==sum)
			{
				cout<<"Sum found between indexes "<<i<<" and "<<j;
				break;
				
			}
		}
	}
}

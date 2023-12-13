#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,sum=0,average;
	cout<<"enter the values";
	cin>>n1>>n2>>n3;
	{
		sum = n1+n2+n3;
		cout<<"sum of numbers"<<sum;
	}
	{
		average=sum/3;
		cout<<"average of numbers"<<average;
	}
	return 0;
}

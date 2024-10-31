#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)//ROWS INCREASE then column increase so j<=i;
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
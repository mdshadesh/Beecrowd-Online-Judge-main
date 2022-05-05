#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	long long int i,i1,n,n1;
	long long int f1,f2;
	f1=f2=1;
	while(scanf("%lld %lld",&n,&n1) != EOF){
		
		for(i=1; i<=n; i++){
			f1=f1 * i;
		}
		for(i1=1; i1<=n1; i1++){
			f2=f2 * i1;
		}
		long long int sum = f1+f2;
		printf("%lld\n",sum);
		f1=f2=1;
		
	}
	
		
}
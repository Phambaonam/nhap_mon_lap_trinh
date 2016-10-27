#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{	
	freopen("labiec10.inp","r",stdin);
	
	int a,b,UCNL,BCNN;
	
	scanf("%d %d",&a,&b);
	
	for(int i =1; i<=100;i++){
		if(a%i==0 && b%i==0){
			UCNL=i;
			BCNN = (a*b)/UCNL;
		}		
	}
	printf("%d\n",UCNL);
	printf("%d\n",BCNN);
	return 0;
}

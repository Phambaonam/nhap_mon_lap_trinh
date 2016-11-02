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
	
	int n,a,b,UCNL,BCNN;
	
	scanf("%d %d %d",&n,&a,&b);
	
	for(int i =1; i<=n;i++){
		if(a%i==0 && b%i==0){
			UCNL=i;
			BCNN = (a*b)/UCNL;
		}		
	}
	printf("uoc chung lon nhat la %d\n",UCNL);
	printf("boi chung nho nhat la %d\n",BCNN);
	return 0;
}

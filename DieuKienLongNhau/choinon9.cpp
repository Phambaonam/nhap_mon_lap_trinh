#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int a;
	freopen("choinon9.inp","r",stdin);
	
	scanf("%d",&a);
	
	if( a>= 0 && a%2 == 0){
		printf("a = %d la so chan\n",a);
	} else if( a>= 0 && a%2 != 0){
		printf("a = %d la so le\n",a);
	}else{
		printf("a = %d la so am\n",a);
	}
	return 0;
}

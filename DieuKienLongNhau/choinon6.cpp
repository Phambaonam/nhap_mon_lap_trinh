#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon6.inp","r",stdin);
	
	int a,b;
	
	scanf("%d %d",&a,&b);

	if(a > 40 ){
		printf("Tong so gio lam la: %d\n So tien luong la: %d\n",a,(40*b + (a -40)*b*2));
	} else{
		printf("Tong so gio lam la: %d\n So tien luong la: %d\n",a,a*b);
	}
	
	return 0;
}

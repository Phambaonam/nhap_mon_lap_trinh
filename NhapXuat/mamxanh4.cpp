#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("mamxanh4.inp","r",stdin);
	freopen("mamxanh4_output.inp","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	printf("so thu nhat o file la:%d\n",a);
	printf("so thu hai o file la: %d\n",b);
	printf("ket qua cua 2 so dc luu vao file mamxanh4_output.inp la: %d %d\n",a,b);
	
	return 0;
}

#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon11.inp","r",stdin);
	
	int a,b;
	
	scanf("%d %d",&a, &b);
	
//	float result = ((float)-b)/a;
//	float result = (float)-b/a;
	float result = -(1.0*b)/a;
	
	if(a != 0 && b != 0){
		printf("Phuong trinh da cho co 1 nghiem x = %f\n",result);
	} else if(a ==0 && b == 0){
		printf("Phuong trinh da cho vo so nghiem\n");
	} else {
		printf("Phuong trinh da cho vo nghiem\n");
	}
	
	return 0;
}

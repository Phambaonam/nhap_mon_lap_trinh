#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon12.inp","r",stdin);
	
	int a,b,c;
	
	scanf("%d %d %d",&a, &b, &c);
	
	int delta = b*b - 4*a*c;
	
	if(delta > 0){
		printf("Phuong trinh da cho co 2 phan biet x1= %f và x2 = %f\n",  (float)(-b + pow(delta,(float)1/2))/(2*a), (float)(-b - pow(delta,(float)1/2))/(2*a));
	} else if(delta == 0){
		printf("Phuong trinh da cho co nghiem kep x1 = x2 = %f\n",(float)(-b/(2*a)));
	} else {
		printf("Phuong trinh da cho vo so nghiem\n");
	}
	
	return 0;
}

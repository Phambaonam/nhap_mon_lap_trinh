#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	float sum = 0;
	
	scanf("%d",&n);
	
	if(n==0){
		printf("Hay nhap so nguyen khac 0\n");
	}else if(n<0){
		for(int i=n; i<=-1; i++){
			sum = sum + (float)(1)/i;
		}
		printf("Tong nghich dao cua %d so nguyen dau tien la %f\n",-n,sum);
	}else{
		for(int i=1; i<=n; i++){
			sum = sum + (float)(1)/i;
		}
		printf("Tong nghich dao cua %d so nguyen dau tien la %f\n",n,sum);
	}
	
	return 0;
}

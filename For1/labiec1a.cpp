#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int a,b;
	
	scanf("%d %d",&a, &b);
		
	if(a<=0 || b<=0){
		printf("Hay nhap vao 2 so nguyen duong khac 0\n");
	} else if(a>100){
		printf("Ban len nhap a nho hon hoac bang 100\n");
	} else if(b <= 100){
		printf("Cac so can tim trong khoang tu a =%d den b=%d la\n",a,b);
		for(int i =a; i<=b; i++){
			printf("%d\n",i);
		}		
	} else {
		printf("b phai nho hon hoac bang 100\n");
	}
		
	return 0;
}

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
	int sum =0;
	
	scanf("%d",&n);
	
	if(n<=0){
		printf("Ban hay nhap vao so nguyen duong khac 0\n");
	} else if(n<=100){
		printf("n=%d\n",n);
		for(int i=1;i<=n;i++){
			printf("Ban hay nhap vao so thu: %d\n",i);
			int a;
			scanf("%d",&a);
			sum = sum + a;
		}
		printf("Tong %d so nguyen vua nhap vao la: %d\n",n,sum);
	} else{
		printf("So nhap vao phai nho hon hoac bang 100\n");
	}
	
	return 0;
}

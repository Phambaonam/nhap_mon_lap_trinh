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
	
	if(n == 0){
		printf("Ban vua nhap vao so 0\n");
	} else if(n<0){
		for(int i=n; i<=-1; i++){
			sum = sum + i;
		}
		printf("Tong tinh duoc la: %d\n",sum);
	}else if( n<= 100){
		for(int i=1; i<=n; i++){
			sum = sum + i;
		}
		printf("Tong tinh duoc la: %d\n",sum);
		
	}else{
		printf("n phai nho hon hoac bang 100\n");
	}
	
	return 0;
}

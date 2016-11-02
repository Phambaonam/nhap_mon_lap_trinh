#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("labiec9.inp","r",stdin);
	
	int n,a,max=0,min=100;
	
	scanf("%d",&n);
//	for(int i = 1; i<=n; i++){
//		scanf("%d",&a);
//		if(max<a){
//			max=a;			
//		}	
//	}	
//	min =max;	
//	for(int j=1; j<=n; j++){
//		scanf("%d",&a);
//		if(a<min){
//			min =a;
//		}
//	}
	
	for(int i =1; i<= n; i++ ){
		scanf("%d",&a);	
		if(max < a){
			max = a;
		}
		if(min > a){
			min = a;
		}
	}
	printf("So lon nhat la %d\n",max);
	printf("So nho nhat la %d\n",min);
	
	return 0;
}

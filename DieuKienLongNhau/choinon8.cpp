#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a >= b && b >= c){
		printf("So thu tu tang dan la %d %d %d\n",c,b,a);
	} else if(b >= a && a >= c){
		printf("So thu tu tang dan la %d %d %d\n",c,a,b);
	} else if(b >= c && c >= a){
		printf("So thu tu tang dan la %d %d %d\n",a,c,b);
	} else if(c >= a && a >= b){
		printf("So thu tu tang dan la %d %d %d\n",b,a,c);
	} else if(c >= b && b >= a){
		printf("So thu tu tang dan la %d %d %d\n",a,b,c);
	} else{
		printf("So thu tu tang dan la %d %d %d\n",b,c,a);
	}
	
	return 0;
}

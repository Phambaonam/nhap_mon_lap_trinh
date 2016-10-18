#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int a,b;
	
	scanf("%d%d",&a,&b);
	if(a == b){
		printf("a bang b\n");
	} else if(a > b){
		printf("a lon hon b\n");
	} else{
		printf("a nho hon b\n");
	}
	
	return 0;
	
}

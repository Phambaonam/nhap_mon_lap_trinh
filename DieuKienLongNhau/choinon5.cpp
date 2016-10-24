#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a> b && a >c){
		printf("so lon nhat la: %d\n",a);
	} else if(b >a && b >c){
		printf("so lon nhat la: %d\n",b);
	} else {
		printf("so lon nhat la: %d\n",c);
	}
	
	return 0;
}

#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	float a;
	
	scanf("%f",&a);
	
	if(a >= 9){
		printf("Xuat sac");
	} else if(a >= 8 && a < 9){
		printf("Gioi");
	} else if(a >= 7 && a < 8){
		printf("kha");
	}else if(a >= 6 && a < 7){
		printf("TBKha");
	} else if(a >= 5 && a < 6){
		printf("Tbinh");
	} else{
		printf("Yeu");
	}
	
	return 0;
}

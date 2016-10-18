#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
	int a,binh_phuong,lap_phuong;
	
	scanf("%d",&a);
	
	binh_phuong = a*a;
	lap_phuong = a*a*a;
	
	printf("Binh phuong cua %d la : %d\n",a,binh_phuong);
	printf("Lap phuong cua %d la : %d\n",a,lap_phuong);
	
	return 0;
}

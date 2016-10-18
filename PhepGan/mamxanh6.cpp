#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int R;
	float Pi =3.14,dien_tich;
	
	scanf("%d",&R);
	dien_tich = Pi*R*R;
	
	printf("Dien tich hinh tron co ban kinh %d la %f\n",R,dien_tich);
	
	return 0;
}

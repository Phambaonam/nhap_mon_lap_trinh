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
 	float Pi =3.14,S,V;
 	
 	scanf("%d",&R);
 	
 	S = 4*Pi*R*R;
// ep kieu float 	
// 	V = (float)4/3*Pi*R*R*R;
	V = +4.0/3*Pi*R*R*R;
 	
 	printf("Dien tich hinh cau la: %f\n",S);
 	printf("The tich hinh cau la: %f\n",V);
 	
 	
 	return 0;	
 }

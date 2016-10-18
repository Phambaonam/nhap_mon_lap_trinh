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
 	float a = 1.333,Pi =3.14,S,V;
 	
 	scanf("%d",&R);
 	
 	S = 4*Pi*R*R;
 	V = a*Pi*R*R*R;
 	
 	printf("Dien tich hinh cau la: %f\n",S);
 	printf("The tich hinh cau la: %f\n",V);
 	
 	
 	return 0;	
 }

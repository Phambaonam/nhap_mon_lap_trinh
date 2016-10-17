#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
int a,b;

freopen("example_import.inp","r",stdin);
scanf("%d %d", &a, &b);
int sum = a+b;
printf("Tong cua 2 so nhap vao la: %d \n", sum);

freopen("example_export.txt","w",stdout);
printf(" tong duoc luu vao file example_export.txt: %d \n ",sum);
return 0;
}

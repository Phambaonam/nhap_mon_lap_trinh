#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
int a;

freopen("mamxanh3.inp","r",stdin);
scanf("%d %d", &a);
printf("so o file la: %d\n", a);

freopen("mamxanh3_output.inp","w",stdout);
printf("ket  qua duoc luu vao file mamxanh3_output.inp la: %d\n ",a);
return 0;
}

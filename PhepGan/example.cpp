#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int h,m,s;
int main()
{
	scanf("%d",&s);
	h = s/3600;
	s = s - h * 3600;
	m = s/60;
	s = s - m * 60;
	
	printf("%d:%d:%d", h,m,s);
	return 0;
}

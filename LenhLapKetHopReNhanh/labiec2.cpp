#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	
	scanf("%d", &n);
	
	for(int i =1; i<=n; i = i + 2){
		sum = sum + i;
	}
	printf("Tong cac gia tri le tu 0 den %d la %d:",n,sum);
	
	return 0;
}

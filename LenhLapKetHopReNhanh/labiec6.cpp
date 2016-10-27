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
	
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		if(n%i==0){
           printf("%d\n",i);
		}
	}
	return 0;
}

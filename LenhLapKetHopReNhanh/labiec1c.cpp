#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int a,b;
	
	scanf("%d %d",&a, &b);
 	
 	if(a%2 != 0){
 		a = a + 1;
 	}
 	
 	for(int i =a; i<=b; i=i+2){
 		printf("%d\n",i);
 	}

//	for(int i =a; i<=b;i++){
// 			if(i%2 == 0){
//				   printf("%d\n",i);
//				   }
//	   }
// 	
	return 0;
}

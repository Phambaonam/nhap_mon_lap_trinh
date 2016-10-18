#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int hour,minute,sec,time,h,m,s,sumSec,secGreaterDay;
int main()
{
	
	scanf("%d",&hour);
	scanf("%d",&minute);
	scanf("%d",&sec);
	scanf("%d",&time);
	
	sumSec = hour*3600 + minute*60 +sec +time;
	if(sumSec < 24*3600){
	h = sumSec/3600;
	s = sumSec - h * 3600;
	m = s/60;
	s = s - m * 60;
	}else{
	secGreaterDay = 24 *3600 - sumSec;
	h = secGreaterDay/3600;
	s = secGreaterDay - h * 3600;
	m = s/60;
	s = s - m * 60;
	}
	

	printf("%d:%d:%d", h,m,s);
	
	return 0;
}

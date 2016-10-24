#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon10.inp","r",stdin);
	
	int thue_bao_dien_ke = 1000, so_dien;
	
	scanf("%d",&so_dien);
	
	if(so_dien > 200){
			printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,50*230 + 50*480 + 100*700+ (so_dien -200)*900 + thue_bao_dien_ke );
	} else if(so_dien > 100){
		printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,50*230 + 50*480 + (so_dien -100)*700+ thue_bao_dien_ke );
	} else if(so_dien > 50){
		printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,50*230 + (so_dien -50)*480 + thue_bao_dien_ke );
	} else{
		printf("So dien tieu thu la:%dkw, Tong so tien phai tra la:%d\n",so_dien,so_dien*230 + thue_bao_dien_ke);
	}
		
	return 0;
}

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
	int so_dau = 50, so_thu_2 = 50, so_thu_3 = 100, so_vuot_dinh_muc = 200;
	int gia_dau = 230, gia_thu_2 = 480, gia_thu_3 = 700,gia_vuot_dinh_muc = 900;

	
	scanf("%d",&so_dien);
	
	int dinh_muc = so_dien*230 + thue_bao_dien_ke;
	int vuot_dinh_muc_1 = so_dau*gia_dau + (so_dien -so_dau)*gia_thu_2 + thue_bao_dien_ke;
	int vuot_dinh_muc_2 = so_dau*gia_dau + so_thu_2*gia_thu_2 + (so_dien - so_thu_3)*gia_thu_3+ thue_bao_dien_ke;
	int vuot_dinh_muc_3 = so_dau*gia_dau + so_thu_2*gia_thu_2 + so_thu_3*gia_thu_3+ (so_dien -so_vuot_dinh_muc)*gia_vuot_dinh_muc + thue_bao_dien_ke;
	
	if(so_dien >= so_vuot_dinh_muc){
		printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,vuot_dinh_muc_3);
	} else if(so_dien > so_thu_3){
		printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,vuot_dinh_muc_2);
	} else if(so_dien > so_thu_2){
		printf("So dien tieu thu la:%dkw, da vuot qua 50kw, Tong so tien phai tra la:%d VND\n",so_dien,vuot_dinh_muc_1);
	} else {
		printf("So dien tieu thu la:%dkw, Tong so tien phai tra la:%d\n VND",so_dien,dinh_muc);
	}
		
	return 0;
}

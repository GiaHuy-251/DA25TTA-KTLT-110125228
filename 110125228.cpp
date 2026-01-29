#include<stdio.h>

int main()
{
	int a,b,tong,hieu,tich;
	float thuong;
	
	printf("nhap so nguyen a: ");
	scanf("%d",&a);
	printf("\nnhap so nguyen b: ");
	scanf("%d",&b);
	
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=1.0*a/b;
	
	printf("\ntong 2 so nguyen la: %d",tong);
	printf("\nhieu 2 so nguyen la: %d",hieu);
	printf("\ntich 2 so nguyen la: %d",tich);
	printf("\nthuong 2 so nguyen la: %3.2f",thuong);
	
	return 0;
}



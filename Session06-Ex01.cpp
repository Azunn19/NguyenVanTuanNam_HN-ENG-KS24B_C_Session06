#include<stdio.h>
int main(){
	int a, b, c, d, e;
	int Tong = 0;
	printf("Hay nhap 5 so nguyen bat ky: ");
	scanf("%d %d %d %d %d",&a ,&b ,&c ,&d, &e);
	if(a%2 != 0){
		Tong += a;
	} 
	if(b%2 != 0){
	    Tong += b;
	} 
	if(c%2 != 0){
	    Tong += c;
	} 
	if(d%2 != 0){
		Tong += d;
	} 
	if(e%2 != 0){
		Tong += e;
	} 
	printf("Tong cac so le la: %d\n", Tong);
	
	return 0;
}

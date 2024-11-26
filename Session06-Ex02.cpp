#include<stdio.h>
int main(){
	int a, b, c, d, e;
	int count_1 = 0;
	int count_2 = 0;
	printf("Hay nhap 5 so nguyen bat ky: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a%2 == 0){
		count_1++;
	}
	else{
		count_2++;
	}
	if(b%2 == 0){
		count_1++;
	}
	else{
		count_2++;
	}
	if(c%2 == 0){
		count_1++;
	}
	else{
		count_2++;
	}
	if(d%2 == 0){
		count_1++;
	}
	else{
		count_2++;
	}
	if(e%2 == 0){
		count_1++;
	}
	else{
		count_2++;
	}
	printf("Co %d so chan va %d so le\n", count_1, count_2);
	
	return 0;
}

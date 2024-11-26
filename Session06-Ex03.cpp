#include<stdio.h>
int main(){
	int password = 1234;
	int answer;
	printf("Hay nhap mat khau: ");
	scanf("%d",&answer);
	if(answer == password){
		printf("Mat khau chinh xac\n");
	}
	else{
		printf("Mat khau khong chinh xac\n");
	}
	
	return 0;
}

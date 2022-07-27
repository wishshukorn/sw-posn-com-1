#include<stdio.h>
main(){
	int a, b;
	for(a=1;a<=9;a++){
		for(b=1;b<=a;b++){
			printf(" ");
		}
		for(b=9;b>=a;b--){
			printf("*");
		}
		printf("\n");
	}
}

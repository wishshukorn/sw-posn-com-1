#include<stdio.h>
main(){
	int a, b, c;
	for(a=1;a<=9;a++){
		for(b=9;b>=a;b--){
			printf(" ");
		}
		for(c=1;c<=2*a-1;c++){	//**
			printf("*");
		}
		printf("\n");
	}
}

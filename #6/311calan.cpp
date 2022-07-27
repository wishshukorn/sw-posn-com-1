#include<stdio.h>
main(){
	int a, b, c, d, e=1;
	printf("day: ");
	scanf("%d", &a);
	printf("date per month: ");
	scanf("%d", &b);
	for(c=1;c<=a-1;c++){
		printf("\t");
	}
	for(d=1;d<=8-c;d++){
		printf("%d\t", d);
	}
	printf("\n");
	for(d;d<=b;d++&e++){
		printf("%d\t",d);
		if(e%7==0){
			printf("\n");
		}
	}
}

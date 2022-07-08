#include<stdio.h>
main(){
	int a, b,i;
	printf("input no1: ");
	scanf("%d", &a);
	printf("input no2: ");
	scanf("%d", &b);
	for(i=1;i<=1000;i++){
		if(i%a==0&&i%b==0){
			printf("%d\n", i);
		}
	}
}

#include<stdio.h>
main(){
	int money, a, b, c;
	printf("money: ");
	scanf("%d", &money);
	a=money%1000;
	money=money-a;
	b=money%10000;
	c=money%100000;
	
	printf("%d %d %d", a,b,c);
}

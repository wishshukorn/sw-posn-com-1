#include<stdio.h>
main(){
	int money, a, b, c;
	printf("money: ");
	scanf("%d", &money);
	a = money/1000;
	money = money - a*1000;
	b = money/500;
	money = money - b*500;
	c = money/100;
	money = money - c*100;
	printf("B1000 = %d\n", a);
	printf("B500 = %d\n", b);
	printf("B100 = %d", c);
}

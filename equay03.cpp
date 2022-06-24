#include<stdio.h>
#include<math.h>
main(){
	int x, y;
	printf("x = ");
	scanf("%d", &x);
	//y = x*x + 8*x + 4;
	y = pow(x,2) + 8*x + 4;
	printf("%d", y);
}

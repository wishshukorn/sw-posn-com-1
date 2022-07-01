#include<stdio.h>
main(){
//	int a, b, c, d;
//	printf("subject 1 2 3 4: ");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if((a||b||c||d) >100 || (a||b||c||d)<0){
//	printf("invalid input");}
//	printf("%f", (a+b+c+d)/4);

	int a, b, c, d;
	float ar;
	printf("subject 1 2 3 4: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	ar = (a+b+c+d)/4;
	if(ar>100 || 0>ar){
		printf("invalid input!");
	}
	printf("%f", ar);
}

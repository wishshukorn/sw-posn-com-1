#include<stdio.h>
main(){
	int number, a=1, i;
	printf("Enter number: ");
	scanf("%d", &number);
	for(i=1;i<=number;i++){
		a = a * i;
	}
	printf("%d", a);
}

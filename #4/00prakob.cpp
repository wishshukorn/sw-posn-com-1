#include<stdio.h>
main(){
	int number, i=1;
	printf("Enter number: ");
	scanf("%d", &number);
	while(i<=number){
		if(number%i==0){
			printf("%d\n", i);
		}
		i++;
	}
}

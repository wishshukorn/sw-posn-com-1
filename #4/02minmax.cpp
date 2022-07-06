#include<stdio.h>
main(){
	int i=1, min=0, max=0, number;
	while(i<=10){
		printf("Enter number: ");
		scanf("%d", &number);
		if(min==0&&max==0){
			min = number;
			max = number;
		}
		if(number<=min){
			min = number;
		}
		else if(number>=max){
			max = number;
		}
		i++;
	}
	printf("%d, %d", min, max);
}

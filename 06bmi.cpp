#include<stdio.h>
#include<math.h>
main(){
	int height, weight;
	printf("height = ");
	scanf("%d", &height);
	printf("weight = ");
	scanf("%d", &weight);
	printf("bmi = %f", weight/pow(height, 2));
}

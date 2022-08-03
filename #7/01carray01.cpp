#include<stdio.h>
main(){
	int i, a[9], c=0, d=0; // add index +1
	float b=0;
	for(i=0;i<=9;i++){
		printf("Input score %d: ", i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<=9;i++){
		printf("%d\n", a[i]);
	}
	printf("\n");
	for(i=9;i>=0;i--){
		printf("%d\n", a[i]);
	}
	printf("\n");
	for(i=0;i<=9;i++){
		b += a[i];
	}
	printf("sum: %.0f\n", b);
	printf("avg: %f\n", b/i);
	printf("\n");
	for(i=0;i<=9;i++){
		if(a[i] < 50){
			c++;
		}
	}
	printf("pass: %d\n", i-c);
	printf("fail: %d", c);
	return 0;
}

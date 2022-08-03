#include<stdio.h>
main(){
	int a[5] = {-1, 6, 9, 2, -9}, i, max=0, min=0;
	for(i=0;i<=4;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	printf("%d", max);
	printf("\n");
	for(i=0;i<=4;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d", min);
	return 0;
}

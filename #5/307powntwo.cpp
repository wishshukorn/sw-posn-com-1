#include<stdio.h>
#include<math.h>
main(){
	int a;
	float i;
	printf("input n: ");
	scanf("%d", &a);
	if(a>=1){
		for(i=1;i<=a;i++){
			printf("%.2f\t%.2f\n",i,pow(i,2));
		}
	}
	else{
		for(i=1;i>=a;i--){
			printf("%.2f\t%.2f\n",i,pow(i,2));
		}
	}
}

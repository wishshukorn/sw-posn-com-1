#include<stdio.h>
main(){
	int a, b, c, d=0, e, f;
	printf("day: ");
	scanf("%d", &a);
	printf("date per month: ");
	scanf("%d", &b);
	for(c=1;c<a;c++){
		printf("\t");
		d=d+1;
	}
	for(e=1;e<b+1;e++){
		f=e+d;
		if(f%7==0){
			printf("%d\n",e);
		}
		else{
			printf("%d\t",e);
		}
		}
}

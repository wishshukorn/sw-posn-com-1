#include<stdio.h>
main(){
	int number, a, b, c=0;
	printf("Enter number: ");
	scanf("%d", &number);
	for(a=1;a<=number;a++){
		for(b=1;b<=a;b++){
			if(a%b==0){
				c++;
			}
	}
	if(c==2){
		printf("%d\n", a);
	}
	c=0;
}
}

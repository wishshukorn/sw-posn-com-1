#include<stdio.h>
main(){
	int en, prein, ot, in;
	printf("employee number: ");
	scanf("%d", &en);
	printf("preincome: ");
	scanf("%d", &prein);
	printf("ot: ");
	scanf("%d", &ot);
	in = prein + ot;
	if(in>=100000){printf("bonus: %f\n", in*0.1);}
	else if(in>=70000){printf("bonus: %f\n", in*0.07);}
	else if(in>=50000){printf("bonus: %f\n", in*0.05);}
	else if(in>=30000){printf("bonus: %f\n", in*0.03);}
	else{printf("bonus: %f\n", in*0.01);}
}

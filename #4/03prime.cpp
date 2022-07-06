#include<stdio.h>
main(){
	int number, i=1, a=0;
	printf("Enter number: ");
	scanf("%d", &number);
	while(i<=number){
	if(number%i==0){
		//printf("%d\n", i);
		a++;
	}
	i++;
}
	if(a==2){
		printf("this is prime number.");
	}
}

//#include<stdio.h>
//main(){
//	int i, x;
//	i=1;
//	printf("%d", &x);
//	while(i<=x){
//		if(x%i==0){
//			count++; // count = count + 1
//		}
//		i++;
//	}
//}

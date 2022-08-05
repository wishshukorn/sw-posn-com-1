#include<stdio.h>
main(){
	int a[3][2],b[3][2],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Input [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Input [%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t", a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

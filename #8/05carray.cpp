#include<stdio.h>
#include<math.h>
main(){
	int a[3][3],i,j,b[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Input [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[i][j] = pow(a[i][j],2);
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
main(){
	int i, count=0, b[5], a[5]={-1,6,9,2,-9};
	for(i=0;i<=4;i++){
		if(a[i]>0){
			for(a[i];a[i]>0;a[i]--){
				count=count+1;
			}
		}else{
			for(a[i];a[i]<0;a[i]++){
				count=count+1;
			}
		}
		b[i]=count;
		printf("%d\n", b[i]);
		count=0;
	}
}

#include<stdio.h>
main(){
	char ch;
	printf("%c", 'A'+32);
	printf("input ch: ");
	scanf("%c", &ch);
	if(ch>='A'&&ch<='Z'){	//&& = between
	for(ch;ch>='A';ch--){
		printf("%c\n",ch);
	}
	}
	else if(ch>='a'&&ch<='z'){
		ch = ch - 32;
		for(ch;ch>='A';ch--){
			printf("%c\n", ch);
		}
	}
}

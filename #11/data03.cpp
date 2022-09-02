#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	struct student{
		char name[50];
		int age, math, physics;
	} std[4];
	for(i=0;i=4;i++){
		printf("Enter student name: ");
		scanf("%s",&std[i].name);
		printf("Enter student age: ");
		scanf("%s", &std[i].age);
		printf("Enter student math: ");
		scanf("%s", &std[i].math);
		printf("Enter student physics: ");
		scanf("%s", &std[i].physics);
		if(std[i].math<=49){
			printf("%s = 0\n", std[i].name);
		}
		else if(std[i].math>=50 && std[i].math<=59){
			printf("%s = 1\n", std[i].name);
		}
	}
	return 0;
}

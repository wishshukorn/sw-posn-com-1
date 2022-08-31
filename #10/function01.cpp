#include<stdio.h>
float Circle(float radius){
	return(3.14*radius*radius);
}
float Triangle(float height, float base){
	return(0.5*base*height);
}
float Rectangle(float length, float width){
	return(length*width);
}
main(){
	int Menu;
	float radius, height, base, length, width;
	printf("--Menu--\n1.Circle\n2.Triangle\n3.Rectangle\nPlease enter no.: ");
	scanf("%d", Menu);
	if(Menu==1){
		printf("radius: ");
		scanf("%f",&radius);
		printf("Circle = %f", Circle(radius));
	}
	else if(Menu==2){
		printf("height");
		scanf("%f",&height);
		printf("base");
		scanf("%f",&base);
		printf("Triangle=%f",Triangle(height,base));
	}
	else if(Menu==3){
		printf("length");
		scanf("%f",&length);
		printf("width");
		scanf("%f",&width);
		printf("Triangle=%f",Rectangle(length,width));
	}
}

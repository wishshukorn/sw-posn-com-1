#include<stdio.h>
#include<conio.h>
main(){
	int i;
	struct bk{
		char name;
		float price;
		float discount;
	}
	book[4];
	for(i=0;i<=4;i++){
		printf("Enter book name: ");
		scanf("%s", &book[i].name);
		printf("Enter book price: ", book[i].price);
		scanf("%f", &book[i].price);
		book[i].discount = 0.1*book[i].name;
	}
	for(i=0;i<=4;i++){
		printf("Book: %s\n", book[i].name);
		printf("Price: %.2f\n", book[i]. price);
		printf("Discount 10 percent: .2f", book[i].discount, book[i].price - book[i].discount);
	}
	return 0;
}

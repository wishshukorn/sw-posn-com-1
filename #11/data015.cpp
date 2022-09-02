#include<stdio.h>
#include<conio.h>
main(){
	struct book{
		char name[50];
		float price;
		float discount;
	} book1;
	printf("Enter book name: ");
	gets(book1.name);
	printf("Enter book price: ");
	scanf("%f", &book1.price);
	book1.discount = 0.1*book1.price;
	printf("Book: %s\n", book1.name);
	printf("Price: %.2f\n", book1.name);
	printf("Discount 10 percent: %.2f\nTotal price: %.2f", book1.discount, book1.price-book1.discount);
	return 0;
}

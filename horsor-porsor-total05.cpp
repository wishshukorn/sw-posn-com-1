#include<stdio.h>
main(){
	int ps, ks, a, b, c, d, e, f, g, h;
	printf("khorsor = ");
	scanf("%d", &ks);
	ps = ks + 543;
	printf("porsor = %d\n", ps);
	a = ps%10;
	ps = ps/10;
	b = ps%10;
	ps = ps/10;
	c = ps%10;
	ps = ps/10;
	d = ps%10;
	printf("porsor-total = %d\n", a+b+c+d);
	e = ks%10;
	ks = ks/10;
	f = ks%10;
	ks = ks/10;
	g = ks%10;
	ks = ks/10;
	h = ks%10;
	printf("khorsor-total = %d", e+f+g+h);
}

#include <stdio.h>
int commercial(int, int);
int private(int, int);

int main() {
	int year, cc, type;
	printf("Enter the model year of your car: ");
	scanf("%d", &year);
	printf("Enter the CC of your car: ");
	scanf("%d", &cc);
	printf("Enter the type of your car: ");
	scanf("%d", &type);
	
	int tax = 0;
	
	switch (type) {
		case 0:
			tax = commercial(year, cc);
			break;
		case 1:
			tax = private(year, cc);
			break;
		default:
			printf("Invalid\n");
	}
	
	if (tax > 0)
		printf("Car tax: %d\n", tax);

	return 0;
}

int commercial(int year, int cc){
	int tax_per_cc = 0;
	if(cc > 2400){
	tax_per_cc = 24;
}
	else if(cc > 1600 && cc <= 2400 ){
	tax_per_cc = 19;
}
	else{
	tax_per_cc = 18;
}

	int tax = cc * tax_per_cc;
	if(year >= 3 && year <= 20){
	int discount = (year - 2) * 5;
	if(discount > 50){
	discount = 50;
}
	tax = tax * (100 - discount) / 100;
}
	tax = (tax * 13 + 9) / 10;
return tax;
}

int private(int year, int cc){
	int tax_per_cc = 0;
	if(cc > 1600){
	tax_per_cc = 200;
}
	else if(cc > 1000 && cc <= 1600){
	tax_per_cc = 140;
}
	else{
	tax_per_cc = 80;
}

	int tax = cc * tax_per_cc;
	if(year >= 3 && year <= 20){
	int discount = (year - 2) * 5;
	if(discount > 50){
	discount = 50;
}
	tax = tax * (100 - discount) / 100;
}
	tax = (tax * 13 + 9) / 10;
return tax;
}
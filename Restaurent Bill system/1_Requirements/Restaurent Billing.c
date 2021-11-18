#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//functions to generate bills
void generateBillHeader(char name[50], char date[30])
{
	printf("\n\n");
    printf("\t      ADV. Restaurant");
    printf("\n\t    ------------------");
    printf("\nDate:%s",date);
    printf("\nInvoice To: %s",name);
    printf("\n");
    printf("------------------------------------------------\n");
    printf("Item\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n------------------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30],int qty, float price)
{
	printf("%s\t\t",item);
	printf("%d\t\t",qty);
	printf("%.2f\t\t",qty * price);
	printf("\n");
}
struct item
{
	char item[20];
	float price;
	int qty;
};
struct orders
{
	char customer[50];
	char date[50];
	int numOfItems;
	struct items itm[50];
};
void generateBillFooter(float total)
{
	printf("\n");
	float dis = 0.1*total;
	float netTotal=total-dis;
	float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;
	printf("----------------------------------------\n");
	printf("Sub Total\t\t\t%.2f",total);
	printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
	printf("\n\t\t\t\t-----");
	printf("\nNet Total\t\t\t%.2f",netTotal);
	printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
	printf("\n---------------------------------------\n");
	printf("\nGrand Total\t\t\t%.2f",grandTotal);
	printf("\n---------------------------------------\n");
}
int main(){
	int opt;
	struct orders ord;
	//dashboard
	printf("\t===========ADV. RESTAURANT==============");
	printf("\n1.Generate Invoice");
	printf("\n2.Show all invoices");
	printf("\n3.Seareach Invoice");
	printf("\n4.Exit");
	
	printf("\n\nPlease select your prefered operation:\t");
	scanf("%d",&opt);
	fgetc(stdin);
	switch(opt)
	{
		case 1:
			printf("\nPlease enter the name of the customer:\t");
			fgets(ord.customer,50,stdin);
			ord.customer[strlen(ord.customer)-1] = 0;
			strcpy(ord.date,__DATE__);
			
	}
	printf("\n\n");
	return 0;
}

/**
 * @file billing.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct items
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
//functions to generate bills
void generateBillHeader(char name[50],char date[30])
{
	printf("\n\n");
    printf("\t      STHIRA. Restaurant");
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
	printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
	printf("\n-----------------------------------------");
	printf("\nGrand Total\t\t\t%.2f",grandTotal);
	printf("\n-----------------------------------------\n");
}
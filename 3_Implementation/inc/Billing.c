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

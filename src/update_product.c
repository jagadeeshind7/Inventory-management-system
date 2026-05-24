#include "../includes/header.h"

void update_product()
{
	PRODUCT *temp;
	int id;

	if(head == NULL)
	{
		printf("No Products Available");
		return;
	}
 .  printf("Enter Product ID to update: ");
 scanf("%d", &id);

 temp = head;

 while(temp)
 {
	if(temp->id == id)
 }

}

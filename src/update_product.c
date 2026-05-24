#include "../includes/header.h"

void update_product()
{
	PRODUCT *temp;
	int id;

	if (head == NULL)
	{
		printf("No Products Available");
		return;
	}
	printf("Enter Product ID to update: ");
	scanf("%d", &id);

	temp = head;
	prev = NULL;

	while (temp)
	{
		if (temp->id == id)
		{
			if (temp == head)
			{
				head = temp->next;
			}
			else
			{
				prev->next = temp->next;
			}

			free(temp);

			printf("Product Deleted Successfully\n");
			return;
		}

		prev = temp;
		temp = temp->next;
	}
	printf("Product Not Found\n");
}
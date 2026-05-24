#include "../includes/header.h"

PRODUCT *head = NULL;

int main()
{
	int choice;

//	load_from_file();


	while(1)
	{

		printf("1. Add product\n");
		printf("2. View product\n");	
		printf("3. Search product\n");	
		printf("4. Update product\n");
		printf("5. Delete product\n");
		printf("6. Exit\n");

		printf("Enter choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				add_product();
				break;

			case 2:
				view_products();
				break;
                           
			case 3:
				search_product();
				break;

			case 4:
				update_product();
				break;
/*
			case 5:
				delete_product();
				break;
*/
			case 6:
				exit(0);

			default:
				printf("Invaild choice\n");


		}
 

	}	
}


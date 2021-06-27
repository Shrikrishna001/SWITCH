#include<stdio.h>
main()
{
	printf("Pick any Food Item : /n1. Pizza-Rs239/n2. Pasta-Rs179/n3. Burger-Rs129/n4. French Fries-Rs99/n5. Sandwhich-Rs149");
	int choice=0;
	scanf("%d",&choice);
	 
	switch(choice)
{
	case 1:
	printf("You Picked Pizza ");
	break;
	case 2:
	printf("You Picked Pasta ");
	break;	
	case 3:
	printf("You Picked Burger ");
	break;	
	case 4:
	printf("You Picked French Fries ");
	break;
	case 5:
	printf("You Picked Sandwhich ");
	break;	
    default: printf("Invalid Choice");		
}
       	
}

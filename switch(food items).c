#include <stdio.h>
main()
{

  { 
  printf("types of food items:\n 1.pizza,rs.239 \n 2.burger,rs.129 \n 3.pasta,rs.179 \n 4.frenchfries,rs.99 \n 5.sandwich,rs.149");
  printf("\n please select the food item of your choice:");
  int choice=0 ;
  scanf("%d",&choice);
   switch (choice)
    { case 1: printf("fooditem-pizza \n price-rs.239");
	 break;
	  case 2: printf("fooditem-burger \n price-rs.129");
	   break;
	    case 3: printf("fooditem-pasta \n price-rs.179");
		 break;
		  case 4: printf("fooditem-frenchfries \n price-rs.99");
		   break;
		    case 5: printf("fooditem-sandwhich \n price-rs.149");
		    break;
		  default: printf("invalid choice");
		   }
		    return 0;
			 }	
}

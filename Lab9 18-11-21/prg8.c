#include <stdio.h>

int main()
{
    int p;
    printf("Enter 1, If the object position is Infinity\n");
    printf("Enter 2, If the object position is between infinity and Centre of curvature\n");
    printf("Enter 3, If the object position is at centre of curvature\n");
    printf("Enter 4, If the object position is between focus and centre of curvature\n");
    printf("enter 5, If the object position is at focus\n");
    printf("enter 6, If the object position is between focus and pole\n");
    printf("enter here: ");
    scanf("%d", &p);
    
    if (p == 1)
    {
        printf("image position is at focus \nMagnification: Pointed \n");
    }
    else if (p == 2)
       {
       printf("Image position is between focus and centre of curvature \nMagnification: <1 \n");
       }
    
    else if (p == 3)
      { 
        printf("Image position is at centre of curvature \nMagnification: 1 \n");
      }
    else if(p == 4) 
      {
        printf("Image position is between infinity and centre of curvature \nMagnification: >1 \n");
      }
    else if(p == 5)
      {
        printf("image position is at infinity \nMagnification: infinity \n");
      }
    else if(p == 6)
      {
        printf("Image position is imagenary \nmagnification: >>1 \n");
      }
    else
      {
        printf("please enter correct value");
      }
   

    return 0;
}
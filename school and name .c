#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("sadini navodya\n");
    printf("sujatha vidyalaya\n");
    printf("23.1\n");
    printf("21\n");


    printf("sadini\n 23.1\n 21\n");



    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");


    printf(" *\n **\n ***\n ****\n *****\n");
    printf(" *\t **\t ***\t ****\t *****\t \n");
    printf(" *\a **\a ***\a ****\a *****\a");




   int a=30;
   printf("%d\n",a);

   float b=3.35;
   printf ("%2f\n",b);

   double c=3.14;
   printf("%f\n",c);

   char letter='A';
   printf("%c\n",letter);






  int n1,n2,total;
   printf("Enter First Number:");
   scanf("%d",&n1);
   printf("Enter Second Number:");
   scanf("%d",&n2);
   total=n1+n2;
   printf("The Toatal is %d\n",total);



   float n1,n2,avg;
   printf("Enter First Number:");
   scanf("%f",&n1);
   printf("Enter Second Number:");
   scanf("%f",&n2);
   avg=(n1+n2)/2;
   printf("The average is %f\n",avg);



printf("Sadini Navodya\n 2002\n");




int n1,n2,swap;
printf("Enter First Number:");
scanf("%d",&n1);
printf("Enter Second Number:");
scanf("%d",&n2);
printf("Before swap:\n");
printf("First Number:%d\n",n1);
printf("Second Number:%d\n",n2);
swap =(&n1,&n2);
printf("After swap:\n");
printf("First Number:%d\n",n1);
printf("Second Number:%d\n",n2);

  }


    return 0;
}

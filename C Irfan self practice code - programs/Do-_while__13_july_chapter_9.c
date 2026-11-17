/*
#include<stdio.h>
int main()
{
    int i =1;

    do
    {
       printf("\n %d",i);
       
    i++;



    } 
    while (i <=10);

    return 0;

    

}
*/

/*
#include<stdio.h>
int main()
{
    int i = 1;

   do
   {
  

    printf("\n %d", i);
    i++;
   }

   while (i <=5);
   
   return 0;
}
*/

/*



*/


/*

#include<stdio.h>
int main()
{
    int i = 1;

    do
    {
      printf("\n 5* %d = %d\n",i, 5*1);
      i++;
        
    } 
    while (i<=10);
    return 0;
    
}

#include<stdio.h>
int main()
{
int i = 1;

do
{
    printf("\n%d",i);
    i++;
}
while(i<=5);

return 0;
}
*/

//practice if else breack while do while


/*
#include<stdio.h>
int main()
{
    int password;
    printf("\n emter the password");
    scanf("%d", &password);

    if(password == 1234)
    {
        printf("\n your password valid");

    }
    else
    {
        printf("\n your wrong password");

    }
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    char light;

    printf("enter the traffic light r,y,g");
    scanf("%c",&light);

    switch(light)
    {
    case 'r':
    printf ("\n stop the car");
    break;

    case 'y':
    printf("\n slow your car");
    break;

    case 'g':
    printf("\n ready to go");
    break;

    default:
    printf("invalid entry");

}

return 0;

}
*/

/*

#include<stdio.h>
int main()
{
    char light;
    printf("enter the traffic light r,y,g");
    scanf("%c",&light);

    switch(light)
    {
        case 'r':
        printf("\n stop the car");
        break;

        case 'y':
        printf("\nslow your car");
        break;

        case 'g':
        printf("\n you can go");
        break;

        default:
        printf("\n invalid enter");

    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i = 2;

    printf("even values from 1 to 20\n ");
    
    while(i<=20)
    {
        printf("%d",i);
        i = i + 2;
    }
    return 0;
}
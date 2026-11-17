
/*
#include<stdio.h>
int main()
{
    char name[20];
    int i, len = 0;

    puts("enter the name of string");
    gets(name);

    printf("\n the name is %s",name);

    for(i=0; name[i]!='\0'; i++)
    {
        len++;
      
    }
    printf("\nlenth of string is %d", len);

    return 0;

}
*/
/*
  //copy name example

  #include<stdio.h>
  int main()
  {
    char name[50];
    char cpy[50];
    int i;

    puts("enter name of string");
    gets(name);

    printf("\n before copy name is %s", name);
    

    for(i=0; name[i] != '\0'; i++)
    {
        cpy[i] =  name[i] ;

    }

    cpy[i] = '\0';

    printf("\n after copy the copy name is %s",cpy);

    return 0;
  }

  #include <stdio.h>

int main()
{
    char name[50];
    char cpy[50];
    int i;

    puts("Enter name of string:");
    gets(name);

    printf("\nBefore copy, name is : %s", name);

    for(i = 0; name[i] != '\0'; i++)
    {
        cpy[i] = name[i];
    }

    cpy[i] = '\0';

    printf("\nAfter copy, cpy is : %s", cpy);

    return 0;
}
    */


    // merge name program

    #include<stdio.h>
    int main()
    {
        char name1[50];
        char name2[50];
        int i,j;

        puts("enter the first string");
        gets(name1);
        puts("enter the second name");
        gets(name2);

        for(i=0; name1[i] !='\0'; i++)

        for(j=0; name2[j] !='\0'; j++)

    {
        name1[i] = name2[j];
        i++;
    }

    name1[i]= '\0';

    printf("the merge name is %s", name2);

        return 0;
    }


    
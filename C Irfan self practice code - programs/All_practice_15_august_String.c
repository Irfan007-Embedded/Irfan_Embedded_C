
/*
#include<stdio.h>
int main()
{
    char name[20] = "Irfan";

    printf("%s", name);

    return 0;

}


#include<stdio.h>
int main()
{


char name [20] = "IrfanMalgave";

printf("%s", name);

return 0;
}


#include<stdio.h>
int main()
{
    char name[20];
     
    printf("enter your name");
    scanf("%s", name);

    printf("your name is: %s", name);

    return 0;
}




#include<stdio.h>
int main()
{
    char name[] = "Irfan";
    int i;

    for(i=0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);

        
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char name[] = "Irfan";
    int i;

    for(i=0; name[i] != '\0'; i++)
    {
        printf("%c",name[i]);

    }
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Irfan";

    printf("Length = %lu", strlen(name));

    return 0;
}



#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "IrfanmMalgave";
    int i;

        printf("length = %1u", strlen(name));

    
    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char company[] = "SMC";

    printf("length = %1u", strlen(company));
    return 0;

}


// String copy

#include<stdio.h>
#include<string.h>
int main()
{
    char name1[] = "Irfan";
    char name2[20];

    strcpy(name2,name1);

    printf("%s", name2);

    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char company1[] = "Abunayyan";
    char company2[20];

    strcpy(company2,company1);

    printf("%s",company2);
    return 0;

}

// strcat

#include<stdio.h>
#include<string.h>
int main()
{
    char name1[20] = "Irfan";
    char name2[20] = "Malgave";

    strcat(name1,name2);

    printf("%s",name1);

    return 0;

}


#include<stdio.h>
#include<string.h>
int main()
{
    char ronaldo[20] = "Niceplayer";
    char messy[20] = "goodplayer";

    strcat(ronaldo,messy);

    printf(" %s " ,ronaldo);
    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char name1[20] = "Ali";
    char name2[20] = "Ali";

    if(strcmp(name1, name2) == 0)
    {
        printf("both name are same");

    }
    else
    {
        printf("both are diffenrent");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char notebook[20] = "writing";
    char book[20] = "writing";

    if(strcmp(notebook,book) == 0)
    {
        printf("Both are same");
    }
    else{
        printf("Both are different");
    }
    return 0;
}

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char school[] = "study";
    char college[] = "study";

    if(strcmp(school,college) == 0)
    {
        printf("Both are same");
    }
    else{
        printf("both are different");
    }
    return 0;
}


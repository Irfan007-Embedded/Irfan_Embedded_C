
/*
#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("E:\\C programming course embedded\\File handling practice 01.txt","w");

    if(fptr == NULL)
    {
        printf("File can not be opened");
    }
    else
    {
        printf("File opened successfully");

        fclose(fptr);
        printf("\nFile closed successfully");

    

    }
    return 0;
    
}

*/
/*
#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("E:\\C programming course embedded\\File handling practice 02.txt","a");



if( fptr == NULL)
{
    printf("File can not be opened");
}
else
{
printf("File has been opened successfully");

fclose(fptr);

printf("\n file has beedn closed successfully");
}
return 0;
}

*/
#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("E:\\C programming course embedded\\File handling practice 04.txt","r");

    if(fptr == NULL)
    {
        printf("file can not be opened");
    }
    else
    {
    printf("file has been opened successfully");
    
    fclose(fptr);
    printf("\nfile has been closed");
    }

return 0;
}
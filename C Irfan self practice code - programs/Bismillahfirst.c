 #include<stdio.h>
    int main()
    {
        int n,i, sum = 0;
        printf("\n enter the value of n");
        scanf("%d",&n);

        for(i = 1; i<=n; i++)
       
        sum = sum + i;

        if ( sum == 0)
         {
            printf("\n %d",n);

        }
        else
        {
            printf("\n invalid");
        }
        return 0;
    }
    
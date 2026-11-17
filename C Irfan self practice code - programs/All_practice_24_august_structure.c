

/*
#include<stdio.h>

struct student
{
    int roll_number;
    float marks;
    
};

    int main()
    {
        struct student s1;
        s1.roll_number = 101;
        s1.marks = 99.5;
    
        
        printf("%d\n",s1.roll_number);
        printf("%.2f\n",s1.marks);
      

        return 0;
        
    }




#include<stdio.h>

struct Mall
{
    int shops;
    float business;
};

int main()
{
    struct Mall s1;

    s1.shops = 101;
    s1.business = 99.99;

    printf("%d\n",s1.shops);
    printf("%.2f\n",s1.business);

    return 0;

}


#include<stdio.h>


struct company
{
    int employees;
    float performance;

};

int main()
{
    struct company c1;

    c1.employees = 785;
    c1.performance = 99.99;

    printf("%d\n",c1.employees);
    printf("%.2f\n",c1.performance);

    return 0;

}
*/

//in scanf

#include<stdio.h>

struct student
{
    int role_number;
    float percentage;

};

int main()
{ 
    struct student s1;

   

    printf("enter the role number\n");
    scanf("%d", &s1.role_number);

    printf("enter the percentage\n");
    scanf("%f", &s1.percentage);

    printf("%d\n", s1.role_number);
    printf("%.2f\n",s1.percentage);

    return 0;

}

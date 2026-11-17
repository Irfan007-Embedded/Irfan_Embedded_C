/*
#include<stdio.h>
int fun();

int main()
{
    fun(1,5);

}

int fun(int start, int end)
{
    if(start <= end)
    {
        printf("recursion\n");
    }
    else
    
    return 0;
    start ++;
        fun();
    


}

*/
#include<stdio.h>
int fun(int start, int end); // 1. SUDHAR: Parameters yahan bhi likhe

int main()
{
    fun(1, 5); // 1 se lekar 5 tak chalega (Total 5 baar)
    return 0;
}

int fun(int start, int end)
{
    // Base Condition: Jab tak start, end se chota ya barabar hai
    if(start <= end)
    {
        printf("%d: recursion\n", start); // Pata chalne ke liye number bhi print kiya
        
        // 2. SUDHAR: Agli baar ke liye start ko 1 badha kar dubara function call kiya
        fun(start + 1, end); 
    }
    else
    {
        return 0; // Jab start badhte-badhte 6 ho jayega, toh recursion ruk jayega
    }
}

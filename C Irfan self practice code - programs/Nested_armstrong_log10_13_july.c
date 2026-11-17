/* 3 digits ke liye: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 1534 
digits ke liye: 1634 = 1⁴ + 6⁴ + 3⁴ + 4⁴ = 1 + 1296 + 81 + 256 = 1634
*/


#include <stdio.h>

int main() 
{
    int n, i, temp, rem, digits, sum, base, p;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    // Outer Loop: 1 se lekar n tak har number ko check karne ke liye
    for (i = 1; i <= n; i++) {
        
        // Step 1: Pehle current number 'i' ke total digits count karte hain
        temp = i;
        digits = 0;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        // Step 2: Har digit ki power (digits) nikal kar sum karte hain
        temp = i;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10; // Aakhri digit nikalna

            // Power calculate karne ke liye loop (nested loop)
            p = 1;
            for (base = 1; base <= digits; base++) {
                p = p * rem;
            }

            sum = sum + p;
            temp = temp / 10; // Aakhri digit hatana
        }

        // Step 3: Agar sum original number ke barabar hai, toh print karein
        if (sum == i) {
            printf("%d ", i);
        }
    }

    
    printf("\n");
    return 0;
}
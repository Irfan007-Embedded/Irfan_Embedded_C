

/*
#include<stdio.h>
#include<math.h>
int main()
{
    double result = pow( 5,3); // 5*5*5

    printf("\n 5 ki power 3 hoti hai : %.2f",result);

    return 0;
}

*/
/*
2. round() Program (Nikatna / Round Off) -
 Ekdam AasanMaan lijiye aap dukaan par gaye 
 aur aapka bill 12 rupees 70 paise (12.7) hua, 
 toh dukandaar aapse poore 13 rupees leta hai.
  Agar bill 12 rupees 30 paise (12.3) hua,
   toh woh 12 rupees leta hai. round() 
   function bilkul yahi kaam karta hai.



#include<stdio.h>
#include<math.h>
int main()
{
    double bill1 = 12.7;
    double bill2 = 15.4;

    printf("\n 12.7 ka rounf figure hai %.1f", round(bill1));

    printf("\n 15.4 ka round figure hai %.1f", round(bill2));

    return 0;
}
*/

/*3. log10() Program (Logarithm Base 10) -
 Ekdam AasanMaths me \(\log_{10}(100)\)
  ka matlab hota hai ki 10 ki power 
  kitni lagayein ki 100 ban jaye? 
  Hum jaante hain ki 10² = 100 hota hai, 
  isliye answer 2 aata hai.  */

  #include<stdio.h>
  #include<math.h>
  int main()
  {
    int num = 512;
    
    int digits = (int) log10(num) + 1;

    printf("%d ke andar ki kul digits hai %d", num, digits);

    return 0;

  }
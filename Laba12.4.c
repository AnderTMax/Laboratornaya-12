#include <stdio.h> //ֿמהךכ‏קוםםטו בטבכטמעוךט גגמהא/גûגמהû
 
int main(void) //ׂמקךא גץמהא ג ןנמדנאללף – דכאגםף‏ פףםךצט‏
{
   system("chcp 1251"); 
   int n; // ־בתÿגכוםטו כמךאכüםמי ןונולוםםמי עטןא “int”
   printf("׳טסכמ:") ; // ֲûגמה עוךסעא םא ‎ךנאם
   scanf_s("%i", &n); //ֲגמה חםאקוםטÿ ס ךכאגטאעףנû
 
   switch (n/100) {
   case 1:
       printf("סעמ ");
       break;
   case 2:
       printf("הגוסעט ");
       break;
   case 3:
       printf("ענטסעא ");
       break;
   case 4:
       printf("קועûנוסעא ");
       break;
   case 5:
       printf("ןÿעüסמע ");
       break;
   case 6:
       printf("רוסעüסמע ");
       break;
   case 7:
       printf("סולüסמע ");
       break;
   case 8:
       printf("גמסולüסמע  ");
       break;
   case 9:
       printf("הוגÿעüסמע  ");
       break;
   }
 
   if ((n%100)/10==1)
        switch (n%100) {
        case 10:
                printf("הוסÿעü\n");
                break;
            case 11:
                printf("מהטםאהצאעü\n");
                break;
        case 12:
                printf("הגוםאהצאעü\n");
                break;
        case 13:
                printf("ענטםאהצאעü\n");
                break;
        case 14:
                printf("קועûנםאהצאעü\n");
                break;
        case 15:
                printf("ןÿעםאהצאעü\n");
                break;
        case 16:
                printf("רוסעםאהצאעü\n");
                break;
        case 17:
                printf("סולםאהצאעü\n");
                break;
        case 18:
                printf("גמסולםאהצאעü\n");
                break;
        case 19:
                printf("הוגÿעםאהצאעü\n");
                break;
        }
    else {
        switch ((n%100)/10) {
            case 2:
                printf("הגאהצאעü ");
                break;
            case 3:
                printf("ענטהצאעü ");
                break;
            case 4:
                printf("סמנמך ");
                break;
            case 5:
                printf("ןÿעüהוסÿע ");
                break;
            case 6:
                printf("רוסעüהוסÿע ");
                break;
            case 7:
                printf("סולüהוסÿע ");
                break;
            case 8:
                printf("גמסולüהוסÿע ");
                break;
            case 9:
                printf("הוגÿםמסעמ ");
                break;
        }
 
        switch (n%10) {
        case 1:
            printf("מהטם\n");
            break;
        case 2:
            printf("הגא\n");
            break;
        case 3:
            printf("ענט\n");
            break;
        case 4:
            printf("קועûנו\n");
            break;
        case 5:
            printf("ןÿעü\n");
            break;
        case 6:
            printf("רוסעü\n");
            break;
        case 7:
            printf("סולü\n");
            break;
        case 8:
            printf("גמסולü\n");
            break;
        case 9:
            printf("הוגÿעü\n");
            break;
        }
  }
   return 0;//ֲמחגנאע צוכמקטסכוםםמדמ חםאקוםטÿ ןונוה חאגונרוםטול פףםךצטט
}
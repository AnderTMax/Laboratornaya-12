#include <stdio.h>
 
int main(void)
{
   int n;
   printf("ךמכ-גמ:") ;
   scanf ("%i", &n);
 
   if (n/10==1)
        switch (n) {
        case 10:
                printf("הוסÿעü ףקובםûץ חאהאםטי. \n");
                break;
            case 11:
                printf("מהטםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 12:
                printf("הגוםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 13:
                printf("ענטםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 14:
                printf("קועûנםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 15:
                printf("ןÿעםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 16:
                printf("רוסעםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 17:
                printf("סולםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 18:
                printf("גמסולםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        case 19:
                printf("הוגÿעםאהצאעü ףקובםûץ חאהאםטי.\n");
                break;
        }
    else {
        switch (n/10) {
            case 2:
                printf("הגאהצאעü ");
                break;
            case 3:
                printf("ענטהצאעü ");
                break;
            case 4:
                printf("סמנמך ");
                break;
        }
 
        switch (n%10) {
        case 1:
            printf("מהםמ ");
            break;
        case 2:
            printf("הגא ");
            break;
        case 3:
            printf("ענט ");
            break;
        case 4:
            printf("קועûנו ");
            break;
        case 5:
            printf("ןÿעü ");
            break;
        case 6:
            printf("רוסעü ");
            break;
        case 7:
            printf("סולü ");
            break;
        case 8:
            printf("גמסולü ");
            break;
        case 9:
            printf("הוגÿעü ");
            break;
        }
 
        switch (n%10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("ףקובםûץ חאהאםטי.\n");
            break;
        case 1:
            printf("ףקובםמו חאהאםטו.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("ףקובםûץ חאהאםטÿ.\n");
            break;
        }
  }
   return 0;
}
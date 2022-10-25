#include <stdio.h>
#include <stdlib.h>

float kapital, zinssatz, zinsen;
int anz_tage;
const int umrechnung = 100*365;

float zinsberechnung (){
    return kapital*zinssatz*anz_tage/umrechnung;
}

int main(void) {
    printf("Zu verzinsendes Kapital in Euro? ");
    scanf("%f",&kapital);
    printf("Anzahl der Tage? ");
    scanf("%d", &anz_tage);
    printf("Zinssaz in Prozent? ");
    scanf("%f",&zinssatz);

    zinsen = zinsberechnung();

    printf("\nAnfallende \"Zinsen\": \t \a %.2f Euro\n\n",zinsen);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define maxl 99999

void main_menu();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();

int main() {
    setlocale(LC_ALL, "da_DK");

    main_menu();

    return 0;
}

void main_menu()
{
    char char_choice[3];
    int int_choice = 0;

    char *ptr; // ligegyldig

    do {
        system("cls");

        printf("\nLommeregner: \n\n");
        printf("1. Læg to tal sammen\n");
        printf("2. Minus to tal\n");
        printf("3. Gang to tal\n");
        printf("4. Divider to tal\n");
        printf("5. Find resten (modulus)\n");
        printf("0. Exit\n");

        fgets(char_choice, 3, stdin);
        int_choice = strtol(char_choice, &ptr, 10);

        switch (int_choice)
        {
            case 0:
                exit(0);
                break;
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:

                break;
            case 7:

                break;
            case 8:

                break;
            case 9:

                break;
            default:
                    printf("Forkert valg");
                break;
        }
    } while(int_choice != 99);
}

void addition() {
    printf("Skriv tal 1: ");
    char tal[maxl];
    int int_tal = 0;
    char* str;
    fgets(tal, maxl, stdin);
    int_tal  = strtol(tal, &str, 10);

    printf("Skriv tal 2: ");
    char talto[maxl];
    int int_talto = 0;
    char* strto;
    fgets(talto, maxl, stdin);
    int_talto  = strtol(talto, &strto, 10);

    printf("Tallene lagt sammen er: %d", int_tal + int_talto);

    if (int_tal && int_talto) {
        while (fgetc(stdin) != 0x0A) {

        }
    }
}

void subtraction() {
    printf("Skriv tal 1: ");
    char tal[maxl];
    int int_tal = 0;
    char* str;
    fgets(tal, maxl, stdin);
    int_tal  = strtol(tal, &str, 10);

    printf("Skriv tal 2: ");
    char talto[maxl];
    int int_talto = 0;
    char* strto;
    fgets(talto, maxl, stdin);
    int_talto  = strtol(talto, &strto, 10);

    printf("Tallene minusset med hinanden er: %d", int_tal - int_talto);

    if (int_tal && int_talto) {
        while (fgetc(stdin) != 0x0A) {

        }
    }
}

void multiplication() {
    printf("Skriv tal 1: ");
    char tal[maxl];
    int int_tal = 0;
    char* str;
    fgets(tal, maxl, stdin);
    int_tal  = strtol(tal, &str, 10);

    printf("Skriv tal 2: ");
    char talto[maxl];
    int int_talto = 0;
    char* strto;
    fgets(talto, maxl, stdin);
    int_talto  = strtol(talto, &strto, 10);

    printf("Tallene ganget med hinanden er: %d", int_tal * int_talto);

    if (int_tal && int_talto) {
        while (fgetc(stdin) != 0x0A) {

        }
    }
}

void division() {
    printf("Skriv tal 1: ");
    char tal[maxl];
    int int_tal = 0;
    char* str;
    fgets(tal, maxl, stdin);
    int_tal  = strtol(tal, &str, 10);

    printf("Skriv tal 2: ");
    char talto[maxl];
    int int_talto = 0;
    char* strto;
    fgets(talto, maxl, stdin);
    int_talto  = strtol(talto, &strto, 10);

    double result = (double)int_tal / (double)int_talto;

    printf("Tallene ganget med hinanden er: %f", result);

    if (int_tal && int_talto) {
        while (fgetc(stdin) != 0x0A) {

        }
    }
}

void modulus() {
    printf("Skriv tal 1: ");
    char tal[maxl];
    int int_tal = 0;
    char* str;
    fgets(tal, maxl, stdin);
    int_tal  = strtol(tal, &str, 10);

    printf("Skriv tal 2: ");
    char talto[maxl];
    int int_talto = 0;
    char* strto;
    fgets(talto, maxl, stdin);
    int_talto  = strtol(talto, &strto, 10);



    printf("Resten tilbage: %d", int_tal % int_talto);

    if (int_tal && int_talto) {
        while (fgetc(stdin) != 0x0A) {

        }
    }
}


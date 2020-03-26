#include <stdio.h>
#include <stdlib.h>


#include "utils/input.h"
#include "utils/memory.h"
#include "modules/N/lib/number.h"
#include "modules/N/lib/MUL_NK_N/MUL_NK_N.h"
#include "modules/N/lib/MUL_NN_N/MUL_NN_N.h"
#include "modules/N/lib/MUL_ND_N/MUL_ND_N.h"
#include "modules/N/lib/ADD_NN_N/ADD_NN_N.h"
#include "modules/N/lib/COM_NN_D/COM_NN_D.h"
#include "modules/N/lib/NZER_N_B/NZER_N_B.h"
#include "modules/N/lib/SUB_NN_N/SUB_NN_N.h"

#include "utils/menu.h"
#include "N_FUNC_LIST.h"

void show_help(){
    int user_choice;
    fflush(stdin);
	printf("\nPress any key to continue...");
	getchar();
	system("cls");
	do{
	printf("Do you want back to start menu?\n1 - Yes\n2 - No\n");	
	scanf("%d", &user_choice);
	system("cls");
	} while ((user_choice < 1) || (user_choice > 2));
	if (user_choice == 1) show_menu();
    else printf("Bye...");
}

//Compare 2 numbers

void menu_COM_NN(){
    printf("Please enter first number: ");
    char* str = getString();
    printf("Please enter second number: ");
    char *str1 = getString();

    longNumber* a = parseNumber(str);
    longNumber* b = parseNumber(str1);

    printf("Answer: %d",compare(a, b));

    clearString(str);
    clearString(str1);
    clearStruct(a);
    clearStruct(b);

    show_help();
}

//Check number for zero

void menu_NZER_N_B(){
    printf("Please enter number: ");
    char* str = getString();

    longNumber* a = parseNumber(str);

    if (isZero(a) == 1) printf("Yes");
    else printf("No");

    show_help();
}
/*
//Addition 1 to number

void menu_ADD_NN_D{

}
*/

//Addition 2 numbers

void menu_ADD_NN_N(){
    printf("Please enter first number: ");
    char* str = getString();
    printf("Please enter second number: ");
    char *str1 = getString();

    longNumber* a = parseNumber(str);
    longNumber* b = parseNumber(str1);

    printf("Answer: ");
    printNumber(sum(a, b));

    clearString(str);
    clearString(str1);
    clearStruct(a);
    clearStruct(b);

    show_help();
}


//Subtraction 2 numbers

void menu_SUB_NN_N(){
    printf("Please enter first number: ");
    char* str = getString();
    printf("Please enter second number: ");
    char *str1 = getString();

    longNumber* a = parseNumber(str);
    longNumber* b = parseNumber(str1);

    printf("Answer: ");
    printNumber(sub(a, b));

    clearString(str);
    clearString(str1);
    clearStruct(a);
    clearStruct(b);

    show_help();
}

//Multiplying number by digit

void menu_MUL_ND_N(){
    printf("Please enter first number: ");
    char* str = getString();
    printf("Please enter second number: ");
    char *str1 = getString();

    longNumber* a = parseNumber(str);
    longNumber* b = parseNumber(str1);

    printf("Answer: ");
    printNumber(multiByDigit(a, b));

    clearString(str);
    clearString(str1);
    clearStruct(a);
    clearStruct(b);

    show_help();
}

//Multiplying number by 10^k

void menu_MUL_NK_N(){
    int k;
    printf("Please enter number: ");
    char* a = getString();
    printf("Please enter 'k': ");
    scanf("%d", &k);
    printf("Answer: ");
    printf("%s", multiplyBy10k(a, k));

    clearString(multiplyBy10k(a, k));

    show_help();
}


//Multiplication 2 numbers

void menu_MUL_NN_N(){
    printf("Please enter first number: ");
    char* str = getString();
    printf("Please enter second number: ");
    char *str1 = getString();

    longNumber* a = parseNumber(str);
    longNumber* b = parseNumber(str1);

    printf("Answer: ");
    printNumber(multi(a, b));

    clearString(str);
    clearString(str1);
    clearStruct(a);
    clearStruct(b);

    show_help();
}

/*
//Subtraction from number other number, multiplied by a di

void menu_SUB_NDN_N(){

}

//Calculate the first digit of the division, multiplied by

void menu_DIV_NN_DK(){

}

//Division of 2 numbers

void menu_DIV_NN_N(){

}

//Calculate the remainder of division

void menu_MOD_NN_N(){

}

//GCF of 2 numbers

void menu_GCF_NN_N(){

}

//LCM of 2 numbers

void menu_LCM_NN_N(){

}

*/
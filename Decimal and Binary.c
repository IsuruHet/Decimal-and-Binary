#include <stdio.h>
#include <stdlib.h>

int decimal_to_binary(int decimal_num){
    int remainder,binary=0,multi=1;
    while(decimal_num>0){
    remainder = decimal_num % 2;
    binary += (remainder * multi);
    multi *= 10;
    decimal_num = decimal_num/2;
    }

    return binary;
}


int binary_to_decimal(int binary_num){
    int remainder,decimal=0,multi=1;
    while(binary_num>0){
    remainder = binary_num % 10;
    decimal += (remainder*multi);
    multi *= 2;
    binary_num = binary_num/10;
    }

    return decimal;
}

int main()
{

    while(1){
    int option,decimal_num,binary_num;
    printf("=========================================================\n");
    printf("Select one of the option:\n\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n\n");
    printf("Your Choice: ");
    scanf("%d",&option);
    if (option == 1){
        printf("Convert Decimal to Binary:\n");
        printf("------------------------------------------\n");
        printf("Input a positive decimal number below 1024: ");
        scanf("%d",&decimal_num);
        int binary = decimal_to_binary(decimal_num);
        printf("The Binary value of %d is: %d\n\n",decimal_num,binary);

    }

    else if(option == 2){
        printf("Convert Binary to Decimal:\n");
        printf("------------------------------------------\n");
        printf("Input a positive Binary number below 1024: ");
        scanf("%d",&binary_num);
        int decimal = binary_to_decimal(binary_num);
        printf("The Decimal value of %d is: %d\n\n",binary_num,decimal);
    }

    else{
        printf("You enter the Wrong Option!");
        return 0;
    }
    }
    return 0;
}

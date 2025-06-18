#include<stdio.h>

int binaryToDecimal(long num){

    int rem;

    if(!(num / 10)){
        return num;
    }else{
        //111001
        rem = num % 10;
        num = num / 10;
        return rem + binaryToDecimal(num) * 2;
    }
}

int main(){

    long binary;
    int decimal;

    printf("Enter the Binary Number: \n");
    scanf("%ld", &binary);

    decimal = binaryToDecimal(binary);

    printf("\nDecimal Number of %ld is %d\n", binary, decimal);

    return 0;
}

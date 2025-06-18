#include<stdio.h>

int main(){

    int num, root, temp;

    printf("Enter a Number\n");
    scanf("%d", &num);

    temp =0;
    root = num / 2;

    while(root != temp){
        temp = root;
        root = (root + num / root) / 2;
    }

    printf("\nSquare root of %d is %d\n", num, root);

    return 0;

}

#include <stdio.h>

int main(){
    int lenght = 5;
    int row;
    int column;
    int space;
    
    scanf("%d",&lenght);
    //printf("%d\n",lenght);

    space = lenght - 1;

    for(row = 1; row<=lenght; row++){
        for(column=1; column<=space; column++){
            printf(" ");
        }
        space--;

        for(column=1; column<= (2*row-1); column++){
            printf("*");
        }
        printf("\n");
    }

    space = 1;

    for(row = 1; row<=lenght; row++){
        for(column=1; column<=space; column++){
            printf(" ");
        }
        space++;

        for(column=1; column<= 2*(lenght-row)-1; column++){
            printf("*");
        }
        printf("\n");
    }

    scanf("%d");

    return 0;
}

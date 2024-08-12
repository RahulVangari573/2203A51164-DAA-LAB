#include<stdio.h>
int i,j,p[100],temp;
void main() {
    printf("Enter orders Priority Number:\n");
    for ( i = 0; i < 12; i++) {
         scanf("%d",&p[i]);
    }
    

    for (i = 0; i < 12 - 1; i++) {
        for (j = 0; j < 12 - i - 1; j++) {
            if(p[j] > p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

     printf("After Sorting Orders Priority:\n");
     for (i = 0; i < 12; i++) {
        printf("%d\n",p[i]);
     }

}
#include<stdio.h>
int i,j,temp,m,a[100];

int main () {
    printf("Enter time to reach destination:");
    
    for( i = 0; i < 4; i++) {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the sorting order:\n");
    printf("1.Ascending Order\n");
    printf("1.Descending Order\n");
    printf("Your Choice: ");
    scanf("%d",&m);

    if(m == 1) {
        for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    }
    else if(m == 2) {
        for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - i - 1; j++) {
            if(a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    }

    else {
        printf("Enter a valid number!");
    }
    
    
    for ( i = 0; i < 4; i++) {
        printf("%d\n",a[i]);
    }
}
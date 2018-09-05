
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int c1,c2,c3;
    scanf("%d%d%d",&c1,&c2,&c3);
    if ((c1,c2,c3<1)&&(c1,c2,c3>10)){
        printf("0");
    }else{
    float promedio=(c1+c2+c3)/3;
        if ((promedio>6)&&(promedio<=10)){
            printf("1");
        }else {
            printf("0");
        }
    }
    return 0;
}


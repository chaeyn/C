#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n<10)
        printf("small");
    else if (n>=10)
        printf("big");
    return 0;
}
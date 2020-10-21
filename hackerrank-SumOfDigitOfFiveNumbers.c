#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    n=(n%10)+((n/10)%10)+((n/100%10))+((n/1000)%10)+n/10000;
    printf("%d",n);


    return 0;
}

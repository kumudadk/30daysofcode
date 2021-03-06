#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d",&n);

    int rem = 0;
    int curr = 0;
    int max = 0;


    while(n > 0) {
        rem = n % 2;
        if(rem == 1) {
            curr++;
            if(curr >= max) {
                max = curr;
            }
        } else {
            curr = 0;
        }
        n = n / 2;
    }

    printf("%d\n", max);

    return 0;
}

or
#Another simple solution

int main(){ 
int n; 
scanf("%d",&n);

int count = 0;

while (n) {
    n = (n & (n << 1));
    count++;
}
printf ("%d\n", count);

return 0;
}


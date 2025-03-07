#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
    int p2 = get_sem(".",'2');
    int p3 = get_sem(".",'3');
    do {
        // *** this is where you should place semaphore 
        P(p2);
        printf("P222222222 is here\n"); i++ ;
        V(p3);
        V(p3);
       // *** this is where you should place semaphore
    
    }  while (i < 100);
    return 0;
}
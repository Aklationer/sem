#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
    int p1 = get_sem(".",'1');
    int p3 = get_sem(".",'3');
    
    do {
        // *** this is where you should place semaphore 
        P(p3);
        printf("P3333333 is here\n"); i++ ;
        V(p1);
       // *** this is where you should place semaphore
   
    }  while (i< 200);
    return 0;
}
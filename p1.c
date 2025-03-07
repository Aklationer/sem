#include <stdio.h>
#include "awk_sem.h"

int main() {
    int i = 0 ;
    // *** Please insert proper semaphore initialization here
    int p1 = create_sem(".",'1',1);
    int p2 = create_sem(".",'2',0);
    int p3 = create_sem(".",'3',0);
    do {
        // *** this is where you should place semaphore 
       P(p1);
       printf("P1111111111 is here\n"); i++;
       // *** this is where you should place semaphore
       V(p2);
       P(p1);
       
    }  while (i < 100) ;
    return 0;
}
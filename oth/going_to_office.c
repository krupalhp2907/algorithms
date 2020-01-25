#include<stdio.h>
#include <math.h>
int main() {
    long int D, Oc, Of, Od, Cs, Cb, Cm, Cd, Classic, Online, t;
    scanf("%ld", &D);
    scanf("%ld %ld %ld", &Oc, &Of, &Od);
    scanf("%ld %ld %ld %ld", &Cs, &Cb, &Cm, &Cd);
    if(D<Of) {
        Online=Oc;
    } else {
        Online=Oc+(D-Of)*Od;
    }
    t=D/Cs;
    Classic=(Cb + t*Cm + D*Cd);
    if(Online < Classic) {
        printf("Online Taxi");
    } else if(Classic < Online) {
        printf("Classic Taxi");
    } else {
        printf("Online Taxi");
    }
    return 0;
}
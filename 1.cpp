#include <stdio.h>

typedef struct {
    int feet;
    int inches;
} Distance;

Distance addDistance(Distance d1, Distance d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
    	   sum.feet += sum.inches / 12;
        sum.inches %= 12;
       
    }
    return sum;
}

 {
    Distance d1, d2, sum;
    printf("Enter first distance in feet and inches:\n");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("enter second distance in feet and inches:\n")
    scanf("%d %d", &d2.feet,&d2.iches);
    sum = addDistance(d1, d2);
    return0;

}





    





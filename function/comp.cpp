#include<stdio.h>

using namespace std;

int main (  )

{

int a, b, c, d, boolean = 0;

 double D;

 printf ( Enter `a’ coefficient :);

 scanf (“%d”, & a) ;

 printf (“nt Enter `b’ coefficient :�);

 scanf (“%&d”, & b);

 printf (�nt Enter `c’ coefficient :�);

 scanf, (“%d�, & c) ;

if ((a > =0) && (a < = 00) && (b > = 0) && (b < =100) && (c > =0) && (c < =100)) {

 boolean = 1;

 if (a = = 0) {

 boolean = -1;

 }

 }

 if (boolean = = 1) {

 d = b * b � 4 * a * c;

 if (d = = 0) {

 printf (“roots are equal and are r1= r2 = %f – b/(2 * float)&));

 }

 else if (d > 0) {

 D = sqrt (d);
 printf (“roots are real and are r1=%f and r2=%f; (-b – D)/(2 * a), (-b + D)/(2 * a));
}
  else {

 D = sqrt (-d) / (2 * a);

 printf (“roots are imaginary”);

 }

 }

 else if (boolean = = -1) {

 printf (“Not a quadratic equation”);
}
 else {
 printf (“Invalid input range …);

}
 getch ( ):
 return 0;

 }
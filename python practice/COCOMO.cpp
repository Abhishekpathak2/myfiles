 
/* Write a program to implement BASIC COCOMO cost estimation model.*/
#include<stdio.h>
#include<math.h>
int i,ss[3];
float kloc,fp,E[3],D[3],P[3];
float a[3] = { 2.4, 3.0, 3.6 };float b[3] = { 1.05, 1.12, 1.20 };
float c[3] = { 2.5, 2.5, 2.5 };float d[3] = { 0.38, 0.35, 0.32 };
void calc(int i)
{E[i] = a[i]*(pow(kloc,b[i]));
D[i] = c[i]*(pow(E[i],d[i]));ss[i] = E[i] / D[i];
P[i] = kloc / E[i];
printf("\n\tEffort, E = %f PM",E[i]); printf("\n\tDevelopment Time, D = %f M",D[i]);
printf("\n\tStaff Size, SS= %d Persons",ss[i]);
printf("\n\tProductivity, P = %f KLOC/PM",P[i]);}
// End of CALC function // 
//Start of MAIN function //
int main()
{
    printf("\nEnter the number of Function Points : ");
    scanf("%f",&fp);
    printf("\n\nMultiplication factor for 'C' is 128 LOC/FP.");
    kloc = (fp*128.00)/1000.00; printf("\n\nKLOC = %f",kloc);
    printf("\n\nESTIMATIONS FOR BASIC COCOMO ARE :") ;
    printf("\n\nFor Organic Mode :"); 
    calc(0); 
    printf("\n\nFor Semidetatched Mode :"); 
    calc(1); printf("\n\nFor Embedded Mode :"); 
    calc(2);
    return 0;
   }
     // End of PROGRAM //
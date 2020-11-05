#include <math.h>
#include <stdio.h>

int main()
{
    const int sum = 1000;
    int a,b,c;
    for (a = 1; a <= sum/3; a++)
    {
                for (b = a + 1; b <= sum/2; b++)
        {
             c = sum - a - b;
            if ( a*a + b*b == c*c )
            {
               printf("a=%d, b=%d, c=%d\n",a,b,c);
                printf("product is:%d \n",a*b*c );
            }


        }
       
    }
     
    return 0;
}
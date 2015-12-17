#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
   long int test,i,j;
   int a[1000000] ;

   cin >> test;

   for(i=0;i<test;i++)
       {
         cin >> a[i];
       }

   for(j=0;j<test;j++)
       {
          long int num,val=5,sum=0,number=0;
          num = a[j];


        while(num >= val)
            {

                number = num / val;
                sum = sum + number;
                val=val*5;

            }

            cout <<endl<<sum;

       }



    return 0;
}


#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

long int rev(long long int number )
{
 long long int i,num,n=10000,rever,j=0,reve,k=0,res=0;

  vector<int> arr(10000);



  for(i=0;i<n;i++)
      {
        arr[i]=0;

      }

  num = number;

  if(num / 10 == 0)
    {
      return num;
    }

  while(num != 0)
    {


      rever = num % 10;

      num = num / 10;

      arr[n]=rever;

      k++;

      n--;

    }


    for(j=10000;k>0;j--)
        {

         reve = arr[j]*pow(10,k-1);

         res = res + reve;

         k--;


        }



return res;



}


int main()
{
   long long int testcase,i,num1[10000],num2[10000];

   cin >> testcase;

   for(i=0;i<testcase;i++)
      {
        cin >> num1[i] >> num2[i];

      }


   for(i=0;i<testcase;i++)
      {

        long long int a,b,c,d;

        a = rev(num1[i]);

        b = rev(num2[i]);

        c = a+b;

        d = rev(c);

        cout << d << endl;


      }

    return 0;
}


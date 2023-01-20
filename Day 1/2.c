#include<stdio.h>
    int main()
    {
       int n,p,m,i=1;
       scanf("%d",&n);
       while(i<=n)
       {
          if(n>=i)
          {
            p=i;
            n=n-p;
          }
         else
          p=n;
         if(n>=2*i)
         {
           m=i*2;
           n=n-m;
         }
         else
          m=n;
        i++;
      }
      if(p>m)
        printf("Motu");
      else
        printf("Patlu");
      return 0;
    }
    
   

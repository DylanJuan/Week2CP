#include<stdio.h>

int main()
{
   int n,a,i,j;
   char nama[5][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
   while(scanf("%d",&n)!=EOF)
   {
       for(a=1,i=0;i<30;++i)
       {
            if(n>5*a)
            {
                n-=5*a;
            }
            else
            {
                for(j=0;j<5;++j)
                {
                    if(n>a)
                    {
                        n-=a;
                    }
                    else
                    {
                        puts(nama[j]);
                        break;
                    }
                }
                break;
            }
            a*=2;
        }
    }
    return 0;
}

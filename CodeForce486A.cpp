#include<stdio.h>

int main()
{
   long long int a,b;
   long long int even=0,odd=0;
   
   scanf("%lld",&a);
   
   if(a%2==0){
     	even = a/2;
    	printf("%lld\n",even);
   }
   else{
    	odd = (((a/2)+1)*(-1));
    	printf("%lld\n",odd);
   }
   
   return 0;
}

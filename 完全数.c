#include<stdio.h>
#include<math.h>
int judgen(int a);

int main(){

   int n;

   printf("������n=");
   scanf("%d",&n);

   if (judgen(n))
     printf("n��һ����ȫ����");
   else
     printf("n������ȫ����");

   return 0;

}

int judgen(int a){
   int i,m,s;
   s=0;
   m=sqrt(a);
   for (i=1;i<=m;i++){
     if ((a%i)==0)
        s=s+i+a/i;
   }
   s=s-a;
   if (s==a)
     return 1;
   return 0;

}



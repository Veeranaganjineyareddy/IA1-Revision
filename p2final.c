#include<stdio.h>
int input()
{
int s;
printf("enter the value:");
scanf("%d",&s);
return s;
}
int cmp(int a, int b, int c)
{
   if((a>b)&&(a>c))
   {
     return a;
   }
   else if((b>c)&&(b>a))
   {
     return b;
   }
    else
   {
   return c;
   }
}

  void output(int a, int b,int c,int s)
{
  printf("among %d,%d,%d\n%d is largest",a,b,c,s);

}
int main()
{
  int r,p,t,s;
  r=input();
  t=input();
  p=input();
  s=cmp(r,t,p);
  output(r,t,p,s);
  return 0;
}

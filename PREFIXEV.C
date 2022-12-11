#include<stdio.h>
#include<string.h>
void push(int);
int pop();
int stack[10],top=-1;
void main()
{
char prefix[10];
int i,n,a,b,res;
printf("enter any prefix expression");
scanf("%s",prefix);
strrev(prefix);
for(i=0;prefix[i]!='\0';i++)
{
  if(prefix[i]>='a'&&prefix[i]<='z')
   {
    printf("enter the value of %c",prefix[i]);
    scanf("%d",&n);
    push(n);
   }
   else
    {
     a=pop();
     b=pop();
     switch(prefix[i])
     {
     case '+':res=a+b;
	      push(res);
	      break;
     case '-':res=a-b;
	      push(res);
	      break;
     case '*':res=a*b;
	      push(res);
	      break;
     case '/':res=a/b;
	      push(res);
	      break;
     }
    }
}
printf("result=%d",pop());
}
void push(int x)
{
top++;
stack[top]=x;
}
int pop()
{
int r;
r=stack[top];
top--;
return r;
}




%{
#include<string.h>
float p,flag,Ans;
char cc;
%}
digit [0-9]+
op "+"|"-"|"*"|"/"
%%
{digit} {p=atof(yytext);
if(flag==0)
{
Ans=p;
flag=1;
}
else
{
switch(cc){
case '+':Ans=Ans+p;
break;
case '-':Ans=Ans-p;
break;
case '*':Ans=Ans*p;
break;
case '/':Ans=Ans/p;

}
}
}
{op} {if(strcmp(yytext,"+")==0)
      cc='+';
      if(strcmp(yytext,"-")==0)
      cc='-';
      if(strcmp(yytext,"*")==0)
      cc='*';
      if(strcmp(yytext,"/")==0)
      cc='/';}
! {printf("\n Final Answer =:%f",Ans);exit(0);}
%%
int yywrap()
{
return 1;
}
int main()
{
flag=Ans=0;
printf("\n Enter the Expression:");
yylex();
return 0;
}

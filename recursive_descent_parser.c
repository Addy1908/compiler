//Write a program to implement Recurive Descent Parser
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char input[10];
int i, error;

void E();
void T();
void Edash();
void Tdash();
void F();
void main()
{
    i=0;
    error=0;
    printf("\n Enter arithmetic Expression:");
    gets(input);
    E();
    if(strlen(input)==i&&error==0)
    printf("\n Accepted..!!");
    else
    printf("\n Rejected..!!");
}
void E()
{
    T();
    Edash();
}
void Edash()
{
if(input[i]=='+')
{
    i++;
    T();
    Edash();
}
}
void T()
{
    F();
    Tdash();
}
void Tdash(){
    if(input[i]=='*'){
        i++;
        F();
        Tdash();
    }
}
void F(){
    if(isalnum(input[i]))i++;
    else if(input[i]=='(')
    {
        i++;
        E();
        if(input[i]==')')
        i++;
        else
            error=1;
    }
    else{
            error=1;
        }
}

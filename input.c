#include<stdio.h>
#include<conio.h>
void main(){
    int a=0, b=1, nt, n=5;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        nt = a + b;
        a = b;
        b = nt;
    }
}

/*	Question:
WAP to calculate the summation of series
(1+x)^n=1+nx/1!+(n(n-1) x^2)/2!+⋯

*/


#include<stdio.h>

int factorial(int a);
int upper_multiplier(int b,int n);
int multi(int x,int y);


int main(){


    int x,n,sum=1,i,val_1,val_2,val_3;
    printf("Enter The Value Of x:\n");
    scanf("%d",&x);
    printf("Enter The Value Of n:\n");
    scanf("%d",&n);


    for(i=1;i<=n;i++){
            val_1=factorial(i);
            val_2=upper_multiplier(i,n);
            val_3=multi(x,i);
    printf("%d\n",val_1);
    printf("%d\n",val_2);
    printf("%d\n",val_3);
    sum=sum+((n*val_2)*val_3)/val_1;


    }

    printf("The Sum Is: %d\n",sum);




    return 0;
}


int factorial(int a){

    int fact=1,i;

    for(i=1;i<=a;++i){
        fact=fact*i;
    }
    return fact;
}


int upper_multiplier(int b,int n){

    int res=1,i;
    b=b-1;

    for(i=b;i>=1;i--){
        res=res*(n-i);
    }
    return res;


}

int multi(int x,int y){

    int i,m=1;

    while (y!=0)
    {
        m *= x;
        --y;
    }
    return m;
}

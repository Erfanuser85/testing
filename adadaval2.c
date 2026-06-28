#include <stdio.h>
int checkprime(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printprime(int a, int b){
    int first = 1;               
    for (int i = a + 1; i < b; ++i){
        if (checkprime(i) !=0){
            if (first!=1) printf(","); 
            printf("%d", i);
            first = 0;               
        }
    }
}

//this is comment
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printprime(a,b);
    return 0;
}
// this is a commit for conflict 2
// change text of ohhhh my god!!!!!!!!!!!!!!!!!
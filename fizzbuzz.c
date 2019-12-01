#include<stdio.h>

int fizzbuss(int x){
    if((x % 3 == 0) && (x % 5 == 0)){
        printf("fizzbuzz,\n");
    }else if(x % 3 == 0){
        printf("fizz,\n");
    }else if(x % 5 == 0){
        printf("buzz,\n");
    }else{
        printf("%d,\n",x);
    }
    return 0;
}

int main(){
    for(int i = 1; i <= 30; i++){
        fizzbuss(i);
    }
    return 0;
}

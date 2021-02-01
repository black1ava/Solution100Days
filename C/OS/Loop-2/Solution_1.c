#include<stdio.h>

int main(){
    for(int i = 0; i < 100; i++){
        if(!(i % 10) && i){
            printf("\n%3d", i);
        }else{
           printf("%3d", i);
        }
    }
    return 0;
}
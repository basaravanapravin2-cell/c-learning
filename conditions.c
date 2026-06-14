#include<stdio.h>
int main(){
    int temperature;
    scanf("%d",&temperature);
    if(temperature>100){
        printf("Warning!\n");
    }
    else{
        printf("safe level\n");
    }
}
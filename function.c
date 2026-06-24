#include<stdio.h>
int celsiusTOfahrenheit(int celsius){
    int fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
 int checksensor (int reading){
    if (reading > 30){return 1;}
    else{return 0;}
 }
 int main(){
    int value;
    scanf("%d",&value);
    int result = celsiusTOfahrenheit(value);
    printf("fahrenheit: %d\n", result);
    int danger = checksensor(37);
    if (danger == 1){
        printf("Danger! %d\n", danger);
    } else {
        printf("Normal %d\n", danger);
    }
 return 0;
}
#include<stdio.h>
void checkTemperature(int temp) {

    if (temp > 30) {
        printf("Warning: High Temperature! %d\n", temp);
    } else {
        printf("Normal %d\n", temp);

    }
}
int main(){
    int temperature [] = {22, 35, 28, 41, 19};
    for (int i = 0; i < sizeof(temperature)/sizeof(temperature[0]); i++) {
        checkTemperature(temperature[i]);
    }
    return 0;
}
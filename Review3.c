#include<stdio.h>
void checksensor(int reading) {
        if ( reading > 50)
    {
        printf("Warning: Sensor reading is too high! %d\n", reading);
    } else if (reading > 30) {
        printf("Warning: High! %d\n", reading);
    } else {
        printf("normal! %d\n", reading);
    }
}
int main(){
    int sensor_check[] = {18, 42,27,55,31, 19};
    for (int i = 0; i < sizeof(sensor_check)/sizeof(sensor_check[0]); i++) {
        checksensor(sensor_check[i]);
    }
    return 0;   
}
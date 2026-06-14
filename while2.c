#include <stdio.h>

int main() {
    int sensor_value;

    scanf("%d", &sensor_value);        // priming read - get the first value
    
    while (sensor_value != -1) {
        printf("Sensor value is %d\n", sensor_value);
        scanf("%d", &sensor_value);    // read next value at end of loop
    }
    
    return 0;
}
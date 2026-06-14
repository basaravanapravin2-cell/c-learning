#include <stdio.h>
int main() {
    int sensor_value;
    do {
        scanf("%d", &sensor_value);
        if (sensor_value == -1) {
            break; // exit the loop if the sentinel value is entered
        }
        printf("Sensor value is %d\n", sensor_value);
    } while (sensor_value != -1);
    return 0;
    }
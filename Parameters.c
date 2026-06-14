#include <stdio.h>

void printsensorvalue(int value){
            printf("Sensor reading: %d\n", value);
    }
int main(){
    int sensorValue1 = 25;
    int sensorValue2 = 30;

    printsensorvalue(sensorValue1);
    printsensorvalue(sensorValue2);

    return 0;
}

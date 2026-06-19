#include <stdio.h>
int main(){
    int temp1 = 22;
    int temp2 = 35;
    int temp3 = 28;
    int temp4 = 41;
    int temp5 = 19;
    int temperatures[] = {temp1, temp2, temp3, temp4, temp5};

    for (int i = 0; i < sizeof(temperatures)/sizeof(temperatures[0]); i++) {
        if (temperatures[i] > 30) {
            printf("Warning: very Temperature %d\n", temperatures[i]);
        } else {
            printf("Temperature is normal %d\n", temperatures[i]);
        }
    }
    return 0;
}
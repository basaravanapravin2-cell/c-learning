#include <stdio.h>
int main() {
    int temperature;
    int hot_days = 0;
   for (int i = 0; i < 5; i++) {
    scanf("%d", &temperature);
        if (temperature > 30) {
            printf("It is hot outside\n");
            hot_days++;
        } else {
            printf("It is not hot outside\n");
        }
    }printf("Number of hot days: %d\n", hot_days);
    return 0;
}
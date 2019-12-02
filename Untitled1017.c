#include <stdio.h>

int main() {
    int time , speed;
    scanf("%d %d", &time, &speed);
    int distance = time * speed;
    printf("%.3f" , (distance/12.0));
}

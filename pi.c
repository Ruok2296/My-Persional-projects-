#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num_point_circle = 0;
    int num_point_total = 10000; // Total number of points to simulate
    double estimate_pi;

    for (int i = 0; i < num_point_total; i++) {
        double x = (double)rand() / RAND_MAX; // Random x coordinate between 0 and 1
        double y = (double)rand() / RAND_MAX; // Random y coordinate between 0 and 1
        double distance = x * x + y * y;

        if (distance <= 1) {
            num_point_circle++;
        }
    }

    estimate_pi = 4.0 * num_point_circle / num_point_total;
    printf("Estimated value of Pi = %lf\n", estimate_pi);

    return 0;
}

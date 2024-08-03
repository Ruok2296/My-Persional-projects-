/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

#define PI 3.14159265358979323846
#define TWOPI 6.28318530717958647692

int k;
double sinA, cosA, sinB, cosB;

void render_frame(double A, double B) {
    double z[1760];
    char b[1760];
    memset(b, 32, 1760);
    memset(z, 0, 7040);

    sinA = sin(A);
    cosA = cos(A);
    sinB = sin(B);
    cosB = cos(B);

    for (double theta = 0; theta < TWOPI; theta += 0.07) {
        for (double phi = 0; phi < TWOPI; phi += 0.02) {
            double sin_phi = sin(phi), cos_phi = cos(phi);
            double cos_theta = cos(theta), sin_theta = sin(theta);
            double circle_x = cos_theta + 2;
            double circle_y = sin_theta;

            double x = circle_x * cosB * cos_phi - circle_y * sinB * cos_phi;
            double y = circle_x * sinA * cosB * sin_phi + circle_y * cosA - circle_x * cosA * sin_phi * sinB;
            double z_val = 1 / (circle_x * sinA * sinB * sin_phi + circle_y * cosA + 5);
            double t = circle_x * cosA * cos_phi - circle_y * sinA * sin_phi;

            int xp = 40 + 30 * z_val * (cos_phi * cos_theta * cosB - t * sinB);
            int yp = 12 + 15 * z_val * (cos_phi * cos_theta * sinB + t * cosB);
            int idx = xp + 80 * yp;
            int luminance = 8 * ((sin_theta * sinA - circle_x * cosA * cos_phi) * cosB - circle_x * cosA * sin_phi - circle_y * sinA - cos_phi * cos_theta * sinB);

            if (22 > yp && yp > 0 && xp > 0 && 80 > xp && z_val > z[idx]) {
                z[idx] = z_val;
                b[idx] = ".,-~:;=!*#$@"[luminance > 0 ? luminance : 0];
            }
        }
    }

    // Instead of clearing the screen, print new lines
    for (k = 0; k < 30; k++) {
        printf("\n");
    }
    for (k = 0; k < 1761; k++) {
        putchar(k % 80 ? b[k] : 10);
    }
    usleep(30000);
}

int main() {
    double A = 0, B = 0;
    while (1) {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}
*
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

#define PI 3.14159265358979323846

void render_frame(double A, double B) {
    double z[1760];
    char b[1760];
    memset(b, 32, 1760);
    memset(z, 0, 7040);

    for (double theta = 0; theta < 2 * PI; theta += 0.07) {
        for (double phi = 0; phi < 2 * PI; phi += 0.02) {
            double cosA = cos(A), sinA = sin(A);
            double cosB = cos(B), sinB = sin(B);
            double cosTheta = cos(theta), sinTheta = sin(theta);
            double cosPhi = cos(phi), sinPhi = sin(phi);
            double circleX = cosTheta + 2;
            double circleY = sinTheta;

            double x = circleX * (cosB * cosPhi + sinA * sinB * sinPhi) - circleY * cosA * sinB;
            double y = circleX * (sinB * cosPhi - sinA * cosB * sinPhi) + circleY * cosA * cosB;
            double zVal = 1 / (circleX * cosA * sinPhi + circleY * sinA + 5);
            int xp = 40 + 30 * zVal * x;
            int yp = 12 + 15 * zVal * y;
            int idx = xp + 80 * yp;
            int luminance = 8 * ((cosTheta * sinA - sinTheta * cosA * sinPhi) * cosB - sinTheta * cosA * cosPhi - cosTheta * sinB);

            if (22 > yp && yp > 0 && xp > 0 && 80 > xp && zVal > z[idx]) {
                z[idx] = zVal;
                b[idx] = ".,-~:;=!*#$@"[luminance > 0 ? luminance : 0];
            }
        }
    }

    for (int k = 0; k < 1761; k++) {
        putchar(k % 80 ? b[k] : 10);
    }
    usleep(30000);
}

int main() {
    double A = 0, B = 0;
    while (1) {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

#define PI 3.14159265358979323846

void render_frame(double A, double B) {
    double z[1760];
    char b[1760];
    memset(b, 32, 1760);
    memset(z, 0, 7040);

    for (double theta = 0; theta < 2 * PI; theta += 0.07) {
        for (double phi = 0; phi < 2 * PI; phi += 0.02) {
            double cosA = cos(A), sinA = sin(A);
            double cosB = cos(B), sinB = sin(B);
            double cosTheta = cos(theta), sinTheta = sin(theta);
            double cosPhi = cos(phi), sinPhi = sin(phi);
            double circleX = cosTheta + 2;
            double circleY = sinTheta;

            double x = circleX * (cosB * cosPhi + sinA * sinB * sinPhi) - circleY * cosA * sinB;
            double y = circleX * (sinB * cosPhi - sinA * cosB * sinPhi) + circleY * cosA * cosB;
            double zVal = 1 / (circleX * cosA * sinPhi + circleY * sinA + 5);
            int xp = 40 + 30 * zVal * x;
            int yp = 12 + 15 * zVal * y;
            int idx = xp + 80 * yp;
            int luminance = 8 * ((cosTheta * sinA - sinTheta * cosA * sinPhi) * cosB - sinTheta * cosA * cosPhi - cosTheta * sinB);

            if (22 > yp && yp > 0 && xp > 0 && 80 > xp && zVal > z[idx]) {
                z[idx] = zVal;
                b[idx] = ".,-~:;=!*#$@"[luminance > 0 ? luminance : 0];
            }
        }
    }

    for (int k = 0; k < 1761; k++) {
        putchar(k % 80 ? b[k] : 10);
    }
    usleep(30000);
}

int main() {
    double A = 0, B = 0;
    while (1) {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}


#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define G 9.8

int main() {
    double v0 = 30.0;
    double angle_deg = 30.0;
    double angle_rad = angle_deg * PI / 180.0;

    // 1. �ʱ�ӵ� ����
    double v0x = v0 * cos(angle_rad);
    double v0y = v0 * sin(angle_rad);

    // 2. �ְ��� ����
    double h = (v0y * v0y) / (2 * G);

    // 3. �ְ��� ���� �ð�
    double t_up = v0y / G;

    // 4. ���� �̵� �Ÿ� 
    double total_time = 2 * t_up;
    double range = v0x * total_time;

    // 5. ���� ���� �� �ӵ�
    double vx = v0x;
    double vy = -v0y;  // ���� ũ��, �ݴ� ����
    double v = sqrt(vx * vx + vy * vy);

    printf("1) �ʱ�ӵ� ����: vx = %.2f m/s, vy = %.2f m/s\n", v0x, v0y);
    printf("2) �ְ��� ����: %.2f m\n", h);
    printf("3) �ְ��� ���� �ð�: %.2f s\n", t_up);
    printf("4) ���� �̵� �Ÿ�: %.2f m\n", range);
    printf("5) ���� ���� �� �ӵ�: vx = %.2f m/s, vy = %.2f m/s, v = %.2f m/s\n", vx, vy, v);

    return 0;
}



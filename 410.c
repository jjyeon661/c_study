#include<stdio.h>
#include<math.h>
#define pi 3.141592


int main(void)
{
	    double theta_deg; 
		double  g = -9.8;
		double v0;

		printf("각도를 입력하세요==>");
		scanf_s("%lf", &theta_deg);

		printf("초기속도를 입력하세요==>");
		scanf_s("%lf", &v0);

	// x,y방향의 초기속도를 구하여라
		double rad = theta_deg * pi / 180;
		double v0x = v0 * cos(rad);
		double v0y = v0 * sin(rad);

		printf("v0x의 초기속도= %.2f \n", v0x);
		printf("v0y의 초기속도= %.2f \n", v0y);

	// 최고점의 높이를 구하여라.
		double H = v0y * v0y  / 2 * -g;
		printf("최고점의 높이 = %.2f \n", H);
        

	//최고점에 도착하는 시간을 구하여라
		double t = v0y / -g;
		printf("최고점에 도착하는 시간 = %.2f \n", t);

	//수평으로 이동한 최고 거리를 구하여라

		double s = v0 * 2 * t;
		printf("수평으로 이동한 최고 거리 =%.2f\n ", s);
	   
	//지면에 닿을때의 Vx, Vy를 구하고 V를 벡터 성분을 구하여라.
		double vx = v0x;
		double vy = -v0y;
		double v = sqrt(vx * vx + vy * vy);
		printf(" 지면에 닿을때 vx= %2.f\n", vx);
		printf(" 지면에 닿을때 vy= %2.f\n", vy);
		printf(" 지면에 닿을때 v= %2.f\n", v);
		

}

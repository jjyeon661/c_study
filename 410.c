#include<stdio.h>
#include<math.h>
#define pi 3.141592


int main(void)
{
	    double theta_deg; 
		double  g = -9.8;
		double v0;

		printf("������ �Է��ϼ���==>");
		scanf_s("%lf", &theta_deg);

		printf("�ʱ�ӵ��� �Է��ϼ���==>");
		scanf_s("%lf", &v0);

	// x,y������ �ʱ�ӵ��� ���Ͽ���
		double rad = theta_deg * pi / 180;
		double v0x = v0 * cos(rad);
		double v0y = v0 * sin(rad);

		printf("v0x�� �ʱ�ӵ�= %.2f \n", v0x);
		printf("v0y�� �ʱ�ӵ�= %.2f \n", v0y);

	// �ְ����� ���̸� ���Ͽ���.
		double H = v0y * v0y  / 2 * -g;
		printf("�ְ����� ���� = %.2f \n", H);
        

	//�ְ����� �����ϴ� �ð��� ���Ͽ���
		double t = v0y / -g;
		printf("�ְ����� �����ϴ� �ð� = %.2f \n", t);

	//�������� �̵��� �ְ� �Ÿ��� ���Ͽ���

		double s = v0 * 2 * t;
		printf("�������� �̵��� �ְ� �Ÿ� =%.2f\n ", s);
	   
	//���鿡 �������� Vx, Vy�� ���ϰ� V�� ���� ������ ���Ͽ���.
		double vx = v0x;
		double vy = -v0y;
		double v = sqrt(vx * vx + vy * vy);
		printf(" ���鿡 ������ vx= %2.f\n", vx);
		printf(" ���鿡 ������ vy= %2.f\n", vy);
		printf(" ���鿡 ������ v= %2.f\n", v);
		

}

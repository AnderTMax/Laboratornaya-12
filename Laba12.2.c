#include <stdio.h>//������������ ���������� �����/������

int main(void) //����� ����� � ��������� � ������� �������
{
	int n; // ���������� ��������� ���������� ���� �int�
	char c; // ���������� ��������� ���������� ���� �char�
	printf("�����������:"); // ����� ������ �� �����
	scanf_s("%c", &c); //���� �������� � ����������
	printf("�������:"); // ����� ������ �� �����
	scanf("%i", &n); //���� �������� � ����������

	switch (c) {
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
	}
	printf("%c\n", c); //����� �������� �� �����
	return 0; //������� �������������� �������� ����� ����������� �������
}
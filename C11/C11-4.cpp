#include <stdio.h>

// �ж��Ƿ���ˮ�ɻ����ĺ���
int isArmstrong(int num) {
int original = num;
int sum = 0;

// ����ÿ��λ��������
while (num > 0) {
int digit = num % 10; // ȡ��λ
sum += digit * digit * digit; // �������
num /= 10; // ȥ����λ
}

// ��������͵���ԭ��������ˮ�ɻ���
return (sum == original);
}

// �� [n, 999] ��Χ������С��ˮ�ɻ���
int fnar(int n) {
for (int i = n; i <= 999; i++) {
if (isArmstrong(i)) {
return i; // �ҵ���С��ˮ�ɻ���������
}
}
return 0; // ��Χ�ڲ�����ˮ�ɻ��������� 0
}

int main() {
int n, result;

// ���������� n
printf("������һ������ 100 �������� n��\n");
scanf("%d", &n);

// ��������Ƿ���� 100 ���ںϷ���Χ��
if (n <= 100 || n > 999) {
printf("������Ч����ȷ�� 100 < n <= 999��\n");
return 1; // ���ش���״̬
}

// ���� fnar ����������Сˮ�ɻ���
result = fnar(n);

// ������
if (result != 0) {
printf("�� [%d, 999] ��Χ�ڵ���Сˮ�ɻ����ǣ�%d\n", n, result);
} else {
printf("�� [%d, 999] ��Χ��û���ҵ�ˮ�ɻ�����\n", n);
}

return 0;
}
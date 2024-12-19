#include <stdio.h>

// 判断是否是水仙花数的函数
int isArmstrong(int num) {
int original = num;
int sum = 0;

// 计算每个位的立方和
while (num > 0) {
int digit = num % 10; // 取个位
sum += digit * digit * digit; // 立方相加
num /= 10; // 去掉个位
}

// 如果立方和等于原数，则是水仙花数
return (sum == original);
}

// 在 [n, 999] 范围内找最小的水仙花数
int fnar(int n) {
for (int i = n; i <= 999; i++) {
if (isArmstrong(i)) {
return i; // 找到最小的水仙花数，返回
}
}
return 0; // 范围内不存在水仙花数，返回 0
}

int main() {
int n, result;

// 输入正整数 n
printf("请输入一个大于 100 的正整数 n：\n");
scanf("%d", &n);

// 检查输入是否大于 100 且在合法范围内
if (n <= 100 || n > 999) {
printf("输入无效，请确保 100 < n <= 999。\n");
return 1; // 返回错误状态
}

// 调用 fnar 函数查找最小水仙花数
result = fnar(n);

// 输出结果
if (result != 0) {
printf("在 [%d, 999] 范围内的最小水仙花数是：%d\n", n, result);
} else {
printf("在 [%d, 999] 范围内没有找到水仙花数。\n", n);
}

return 0;
}
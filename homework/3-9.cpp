// xiti3-9.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#define KILOMETER 100000
int main()
{
	double mile, kilometer;
	scanf_s("%lf", &mile);
	kilometer = mile * 5280 * 12 * 2.54 / KILOMETER;
	printf("%lf", kilometer);
	system("pause");
    return 0;
}


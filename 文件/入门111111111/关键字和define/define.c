#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define pai 314
#define MaXnB(x,y)(x>y?x:y)

extern int daxiao(int da, int xiao);

int main() {

	printf("%d\n", pai);

	int def = 66;
	int ine = 99;

	int gengda = daxiao(def, ine);
	int queshida = MaXnB(def, ine);

	printf("%d\n", gengda);
	printf("%d\n", queshida);

	return 0;
}


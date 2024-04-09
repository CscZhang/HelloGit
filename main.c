#include <stdio.h>
int max(int, int);
int max(int, int);
int main() {
	void* a;
	int cnt = 0;
	while (a = malloc(100 * 1024 * 1024)) {
		cnt++;
	};
	printf("最大内存是：%d00MB", cnt);
	
	free(a);
	
	return 0;
		
}
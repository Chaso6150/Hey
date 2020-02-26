#include<stdio.h>
int  nyan(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(){
	int N, K[55];
	double ans = 0.0;
	scanf("%d", &N);
	for (int a = 0; a < N;a++){
		scanf("%d", &K[a]);
	}
	sort(K, N, sizeof(int), nyan);

	for (int b = 0; b < N - 1;b++){
		K[b + 1] += (K[b + 1] + K[b]) / 2;
	}
	printf("%d", K[N - 1]);
	return 0;
}
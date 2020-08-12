#include<iostream>
#include<stdlib.h>

using namespace std ;

long long int comb(long long int p,long long  int q){
	long long int ans = 1, r = 0;
	while(r < q){
		ans = ans*(p-r);
		r++;
		ans = ans/r;
	}
	return ans;
}

int main() {
	int T, N, K ; 
	int *a = NULL ;
	scanf("%d", &T) ;
	while(T--) {
		scanf("%d %d", &N, &K) ;
		a = (int*)malloc(sizeof(N*sizeof(int))) ;
		for(int i = 0; i < N; i++) {
			scanf("%d", &a[i]) ;
		}

		for(int i = 0; i < N-1; i++) {
			for(int j = i+1; j < N; j++){
				if(a[i] > a[j]) {
					int temp = a[i] ;
					a[i] = a[j] ;
					a[j] = temp ;
				}
			}
		}
		
		long long int tCount = 0 ;
		for(int i = 0; i < N; i++){
			if(a[K-1] == a[i]) tCount++ ;
		}
		
		long long int count = 0 ;
		for(int i = 0; i < K; i++) {
			if(a[K-1] == a[i]) count++ ;
		}
		
		printf("%lld\n", comb(tCount, count)) ;
	}
	return 0 ;
}
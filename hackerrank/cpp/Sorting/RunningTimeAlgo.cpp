#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void sortIn(int arr[],int N){
	int i,j,l,a=0,cnt=0;
	for(i=1;i<N;i++){
		l=i;
		for(j=l-1;j>=0;j--){
		//	printf("%d %d\n",i,j);
			if(arr[j]>arr[l]){
				a = arr[l];
				arr[l] = arr[j];
				arr[j] = a;
                cnt++;
			}
			l--;
		}
		//printArr(arr,N);
	}
	printf("%d",cnt);
}
int main(){
	int N,k;
	int arr[1002];
	scanf("%d",&N);
	for(k=0;k<N;k++){
		scanf("%d",&arr[k]);
	}
	sortIn(arr,N);
	return 0;
}

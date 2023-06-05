#include<stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	int a[1000];
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int max = a[0];
	
	

    for (int i=0;i<n;i++) {
    	if ( a[i] > max) {
    		max=a[i];
    	
		}
	}
	printf("gia tri max: %d\n", max);
	int max2=a[0];
	for (int i=0;i<n;i++) {
		if ( a[i] >max2 && a[i]<max ) {
			max2=a[i];
		}
	}
	printf("gia tri max2: %d\n",max2);
	
	int min = a[0];
	for (int i=0;i<n;i++) {
		if (a[i]<min) {
			min=a[i];
		}
	}
	printf("gia tri min: %d\n",min);
	
	int sum=0;
	int dem=0;
	for (int i=0;i<n;i++)	{
		sum=sum+a[i];
		dem++;
	}
	printf("gia tri trung binh cua mang: %f",(float)sum/dem);
	
}

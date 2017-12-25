#include<stdio.h>
void value(int a[],int n,int x)
{
	int *p;
	for(p=a;p<n+a;p++){
		*p=x;
	}
}
int main()
{
	int a[32],n,x,i,*pn=&n,*px=&x,*pa;
	scanf("%d%d",pn,px);
	value(a,*pn,*px);
	for(pa=a;pa<n+a;pa++){
		printf("%d ",*pa);
	}
}

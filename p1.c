//name:aditya baranwal
//reg no:20223014
//purpose:array manipulation
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("enter the size of array:\n");
	int n;
	scanf("%d",&n);
	int l[n];
	for(int a=0;a<n;a++){
		printf("enter %d th element:\n",a);
		scanf("%d",&l[a]);
	}
	int c=n-1;
	for(int i=1;i<=c;i++){
		if(l[i] ==0){
			while(l[c]==0){
				c=c-1;}
			int a=l[c];
			l[c]=l[i];
			l[i]=a;
			c=c-1;
		}}
	for(int k=0;k<n;k++){
		printf("%d ",l[k]);}
	printf("\n");
	return 0;
}
	

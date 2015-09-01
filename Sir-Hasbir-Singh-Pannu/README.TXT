

//This program explains how to pass an array into another function
//An array is initialized in main() and altered in fun()
#include<stdio.h>
void fun(int A[],int n);

int main() {
int i,j,temp,A[] = {9,9,8,5,5},n = 5;
fun(A,n);
for(i=0;i<n;i++) printf("\n%d",A[i]);
printf("\n");
return 0;
}

void fun(int *A,int n){
int i;
for(i=0;i<n;i++) A[i]*=10;
}

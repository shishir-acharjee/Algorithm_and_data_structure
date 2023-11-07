#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>

void bubble_sort(int a[],int n){
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
}


int main() {
    int a[]={1,44,55,-2,17,33,102,0,-223};
    int n=sizeof(a)/4;
    bubble_sort(a,n);
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
return 0;
}
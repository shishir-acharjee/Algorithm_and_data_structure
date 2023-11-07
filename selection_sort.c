#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>

void selection_sort(int a[],int n){
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            
        }
    }
}


int main() {
    int a[]={1,44,55,-2,17,33,102,0,-223};
    int n=sizeof(a)/4;
    selection_sort(a,n);
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
return 0;
}
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void quick_sort(int a[],int low,int high){
    if (low>=high)
    {
        return;
    }
    int p=partition(a,low,high);
    quick_sort(a,low,p-1);
    quick_sort(a,p,high);
    
}
int partition(int a[],int low,int high){
    int pivot,i,j,t;
    pivot=a[high];
    for(i=low-1,j=low; j< high; j++) {
        if(a[j]<pivot){
            i++;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[high];
    a[high]=a[i+1];
    a[i+1]=t;
     return i+1;
}

int main() {
    int a[]={1,5,6,3,8,4,7,2};
    int n=sizeof(a)/4;
    quick_sort(a,0,n-1);
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
return 0;
}
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void insertion_sort(int a[],int n){
 
 for(int i = 1; i < n; i++) {
   int  index=i-1;
   int item=a[i];
    while(item<a[index]&&index>=0){
         a[i]=a[index];
         index--;
         i--;
    }
    a[i]=item;
    
 }


}
int main() {
     int a[]={1,5,6,3,8,4,7,2};
    int n=sizeof(a)/4;
    insertion_sort(a,n);
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
return 0;
}
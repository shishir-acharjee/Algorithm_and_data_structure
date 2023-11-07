#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int binary_search(int a[],int n,int x){
int left=0,right=n-1;
int mid=(left+right)/2;
while(left<=right){
        if(x==a[mid]){
            return mid;
        }
    else if(x>a[mid]){
        left=mid+1;
        mid=(left+right)/2;
    }
    else{
        right=mid-1;
        mid=(left+right)/2;
    }
}

return -1;

}
int main() {
    int n=16;
int array[]={2,4,7,11,22,44,47,49,55,65,67,68,77,79,80,85};

int x;
scanf("%d",&x);
int ans=binary_search(array,n,x);

printf("%d\n",ans);
    return 0;

}
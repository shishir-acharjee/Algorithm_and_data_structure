#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
int linear_search(int a[],int n,int x){
for(int i=0;i<n;i++){
    if(a[i]==x){
        return i;
    }
}
return -1;
}
int main() {
    int n=16;
int array[]={2,4,7,11,22,44,47,49,55,65,67,68,77,79,80,85};

int x;
scanf("%d",&x);
int ans=linear_search(array,n,x);

printf("%d\n",ans);
return 0;
}
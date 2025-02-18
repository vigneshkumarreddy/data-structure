#include <stdio.h>
int main()
{
    int arr[5]={10,2,4,5,3};
    
int ele=4,pos=-1;
for(int i=0;i<=4;i++){
  if(ele==arr[i]){
    pos=i;
  }
}
if(pos==-1){
  printf("postion not found");
}
else{
  printf("%d is position",pos);
}
}

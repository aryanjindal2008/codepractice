#include <stdio.h> 
int binarysearch(int arr[],int size , int target){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if (arr[mid]==target){
            return mid;
        }
        if(arr[mid]< target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int size;
    printf("Enter the number of elements in the array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elements in ascending order:\n",size);
    for(int i=0;i<size;i++){
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);

    }
    int target;
    printf("Enter the element to search for");
    scanf("%d",&target);
    int result=binarysearch(arr,size,target);
    if(result!=-1){
        printf("Element found at index %d\n",result);

    }else{
        printf("Element not found in the array.\n");

    }
    return 0;

}
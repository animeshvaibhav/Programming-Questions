#include<stdio.h>
#include<limits.h>
void merge(int a[],int low,int high,int mid){

int sub_arr_1[mid-low+5],sub_arr_2[high-mid+5],low1,p,t,var1,i;
    low1 = low;
    p=0;t=0;var1=0;
    // first of all ...copying the original array into two sub arrays...
while(low<=mid){

    sub_arr_1[var1++] = a[low++] ;

}
    var1 = 0;
while(low<=high){

    sub_arr_2[var1++] = a[low++];

}
//end of copying the the values...
//setting the last value of both the sub arrays to maximum int value valid....it helps recopying the subarray to the original array...
    sub_arr_1[mid+1] = INT_MAX ;
    sub_arr_2[var1] = INT_MAX ;
   //copying the subarrays into original array...doing the sorting at the same time...
    for(i=low1;i<=high;i++){

        if(sub_arr_1[p]< sub_arr_2[t]){

            a[i]= sub_arr_1[p];
            p++;

            }
        else{

            a[i] = sub_arr_2[t];
              t++;
        }
    }

}
void merge_sort(int a[],int low,int high){

if(low<high){

    int mid = (low+high)/2;
       merge_sort(a,low,mid);
       merge_sort(a,mid+1,high);
       merge(a,low,high,mid);

}

}
int main(){
    int high,i=0;
    int a[]={99,33,44,88,77,66,22,11};
    high = sizeof(a)/sizeof(a[0]);
    high= high-1;
    // calling mergesot function...
    merge_sort(a,0,high);
    for(i=0;i<8;i++)printf("%d ",a[i]);
  //  printf("%d",high);
    return 0;

}

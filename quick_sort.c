#include<stdio.h>
int partition(int a[],int low,int high){
        // making element at high position equal to pivot element....
     int pivot=a[high],i,j,temp;
     i=low;
     for(j=low;j<high;j++){

        if(a[j]<pivot){
                //swap the values at ith and jth position of array...
                //i++;
            temp = a[i];
            a[i]= a[j];
            a[j]= temp;
           i++;
        }
     }
   //swap the values at (i)th loc and pivot....
     temp=a[i];
     a[i]=a[high];
     a[high]=temp;
        return (i);
}
void quick_sort(int a[],int low,int high){
    int p;
    if(low<high){

        p = partition(a,low,high);
        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);
    }

}
int main(){
    int i,low=0,high;
    int a[]={77,66,55,44,33,33,11};
    high=sizeof(a)/sizeof(a[0]);
    high=high-1;
    quick_sort(a,low,high);
    for(i=0;i<7;i++)
        printf("%d ",a[i]);
    return 0;


}

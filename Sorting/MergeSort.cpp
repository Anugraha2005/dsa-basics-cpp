#include<iostream>
using namespace std;
void mergesort(int arr[],int low, int middle, int high){
    int x,y,i,j,k,b[high+1];
    x=low;
    y=middle+1;
    i=low;
    while(x<=middle && y<=high){
        if(arr[x]<arr[y]){
            b[i]=arr[x];
            x++;
        }
        else{
            b[i]=arr[y];
            y++;
        }
        i++;
    }
    while(x<=middle){
        b[i]=arr[x];
        x++;
        i++;
    }
    while(y<=high){
        b[i]=arr[y];
        y++;
        i++;
    }
    for(k=low;k<=high;k++){
        arr[k]=b[k];
    }
}
void merge(int arr[],int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        merge(arr,low,mid);
        merge(arr,mid+1,high);
        mergesort(arr,low,mid,high);
    }
}
int main(){
    int n=7;
    int arr[n]={5,3,4,2,6,9,7};
    merge(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
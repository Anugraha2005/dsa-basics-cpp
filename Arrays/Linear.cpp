#include<iostream>
using namespace std;
int main(){
    int arr[7]={5,3,4,2,6,9,7};
    int Search_element=6;
    int flag=0;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]==Search_element){
            flag=1;
            cout<< "The element found at index "<<i+1;
            break;
        }
    }
    if(flag==0){
            cout<<"Element not found";
        }
    return 0;
}
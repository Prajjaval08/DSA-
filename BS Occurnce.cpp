#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int key){
    int s=0; int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
     else if(arr[mid]<key){
        s=mid+1;

    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
    int lastocc(int arr[],int n, int key){
    int s=0; int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
     else if(arr[mid]<key){
        s=mid+1;

    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;

}

int main(){
    int arr[]={1,2,3,4,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"First occurnce of 4 is at index "<<firstocc(arr,n,4)<<endl;
    cout<<"last occurnce of 4 is at index "<<lastocc(arr,n,4)<<endl;
    return 0;
}
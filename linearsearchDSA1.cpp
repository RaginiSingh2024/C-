#include<iostream>
using namespace std;

//Function to perform linear search
int linearSearch(int arr[],int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i] == target){
            return i; //Return the index if the target is found
        }
    }
    return -1; //Return -1 if the target is not found
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;

    cout <<"Enter the element to search: ";
    cin>>target;
    cout<<"Size of array is "<<size<<endl;

    int result = linearSearch(arr,size,target);
    if(result != -1){
        cout <<"Element found at index"<<result<<endl;

    } else {
        cout<<"Element not found in the array." <<endl; 
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[50];  //array to store the numbers

    //taking the number from the user
    for(int i{0};i<5;i++){

        cout<<"\nEnter the number "<<i<<":";
        cin>>arr[i];

    }

    int largest=arr[0];   //variable to store the largest number


    //findig the largest number
    for(int k{0};k<5;k++){

        if(largest>arr[k]){

        }else{
            largest=arr[k];
        }

    }

    
    //displaying the largest number
    cout<<"\nThe largest number in the array is:"<<largest<<endl;

    return 0;
}

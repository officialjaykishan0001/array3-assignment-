//problem : marge the two given array.
#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"enter the size of the first array : ";
    cin>>m;
    
    //Created the first array of the size m.
    int arr[m];

    //fetching the elements of the first array from the user.
    cout<<"enter the element of the first array : "<<endl;

    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    //taking the size of the second array 
    int n;
    cout<<"enter the size of the second array : ";
    cin>>n;

    //created the second array of the size n.
    int array[n];

    //fetching the element of the second array from the user.
    cout<<"enter the element of the second array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }


    //now creating the new array of the size m+n.
    int newArray[m+n];

    //implementing the arr element into newArray .

    for(int i=0;i<n;i++)
    {
        newArray [i] = arr[i];
    }

    // implementing the array element into newArray.
    int j=0;
    for(int i=n;i<(m+n);i++)
    {

        newArray[i]=array[j++];
    }


    //finally printing the marged array.
    
    cout<<endl<<"the marged array is : "<<endl;
    for(int i=0;i<(m+n);i++)
    {
        cout<<newArray[i]<<" ";
    }

    cout<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    vector <int> v;

    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<endl<<"entered array are : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    cout<<"the required answer is : "<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]*v[i]<<" ";
    }

    cout<<endl;

}
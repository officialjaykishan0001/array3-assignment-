#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array  : ";
    cin>>n;

    vector <int> v;

    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<endl<<"your entered array are : "<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"enter the value of x : ";
    int x;
    cin>>x;
    bool flag = false;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]-v[j]==(-(x)))
            {
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
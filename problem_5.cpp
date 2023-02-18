#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the vector array : ";
    cin>>n;

    vector <int> v;

    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x;
    cout<<"enter the value of the x : ";
    cin>>x;

    int first = 0 , last = (n-1);
    int count = 0;

    while(first<last)
    {
        if(v[first]+v[last]==x)
        {
            first ++;
            last --;
            count ++;
        }
        else if(v[first]+v[last]>x)
        {
            last --;
        }
        else
        {
            first ++;
        }
    }
    cout<<"the answer is : "<<(count)<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int triplet(vector <int> &v,int x);

int main()
{
    int n;
    cout<<"enter the size of the arraY : ";
    cin>>n;

    vector <int > v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x;
    cout<<"enter your number  : ";
    cin>>x;

    int answer = triplet(v,x);
    cout<<"the currect answer is : "<<answer;
    cout<<endl;
    return 0;
}

int triplet(vector<int > &v,int x)
{
    int count = 0; 
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                if(v[i]+v[k]+v[j]==x)
                {
                    count ++;
                }
            }
        }
    }
    return count;
}
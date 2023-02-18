//problem : given a vector array sorted in increasing order and x . find if their exits a pair whose sum
// is exactly x.
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

    cout<<endl;
    cout<<"entered vector are : "<<endl;

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }

  cout<<endl;
    int x;
  cout<<endl<<"enter the value of x : ";
  cin>>x;

    bool flag = false;

  for(int i=0;i<v.size();i++)
  {
    for(int j=i+1;j<v.size();j++)
    {
        if(v[i]+v[j]==x)
        {
            flag = true;
        }
    }
  }

if(flag)
{
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}

    return 0;

}
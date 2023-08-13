#include<iostream>
using namespace std;
int main()
{
    int n,counter=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++ )
    {
        cin>>s;
        if(s[i]=='-')
        {
            counter--;
        }else
        {
            counter++;
            }
    }
    cout<<counter<<endl;
    return 0;

}

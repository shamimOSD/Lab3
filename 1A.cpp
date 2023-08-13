#include<iostream>
using namespace std;
int main()
{
   long long int l,w,a,x,y;
   cin>>l >>w >>a ;
   if(l%a==0)
   {
      x=l/a;
   }
   else
   {
      x=l/a +1;
   }
   if(w%a==0)
   {
      y=w/a;
   }
   else
   {
      y=w/a +1;
   }
   cout<<x*y<<endl;
   return 0;
}

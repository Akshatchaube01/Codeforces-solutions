//YES YES 
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  bool f=true;
  for(int i=1;i<s.length();i++)
  {
   if((s[i-1]=='Y'&&s[i]=='e')||(s[i-1]=='e'&&s[i]=='s')||(s[i-1]=='s'&&s[i]=='Y'))
   {
    continue;
   }
   else
   {
    f=false;
    break;
   }
  }
  if(s[0]!='s'&&s[0]!='e'&&s[0]!='Y')
  {
   f=false;
  }
  if(f==true)
  {
   cout<<"YES"<<endl;
  }
  else
  {
   cout<<"NO"<<endl;
  }
 }
}
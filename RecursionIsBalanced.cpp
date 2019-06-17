// RecursionIsBalanced
#include<iostream>
using namespace std;
bool IsBalanced(string str,string Chk){
  //base case
  if(str.size()==0&&Chk.size()==0) return true;
  if(str.size()==0&&Chk.size()!=0) return false;

  //if first i(ndex is open one
    if(str[0]=='('||str[0]=='{'||str[0]=='['){
      bool ans=IsBalanced(str.substr(1),Chk+str[0]);
      return ans;
    }
     else if(str[0]==')'||str[0]=='}'||str[0]==']'){
             int n=Chk.size();
             // cout<<Chk<<endl<<Chk.substr(0,n-1)<<"--"<<endl;
      if(Chk.size()==0) return false;
      else if(str[0]==')'&&Chk[n-1]=='(') return IsBalanced(str.substr(1),Chk.substr(0,n-1));
      else if(str[0]=='}'&&Chk[n-1]=='{') return IsBalanced(str.substr(1),Chk.substr(0,n-1));
      else if(str[0]==']'&&Chk[n-1]=='[') return IsBalanced(str.substr(1),Chk.substr(0,n-1));
    }
    else return IsBalanced(str.substr(1),Chk);
}
int main(){
  string str;
  getline(cin,str);
  IsBalanced(str,"")==true?cout<<"true":cout<<"false";
}
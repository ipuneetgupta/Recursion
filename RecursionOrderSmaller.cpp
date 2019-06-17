#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

void Recursion_smaller(string str,string rec,int i)
{
  if(rec.size()==i){
    if(rec<str)
    cout<<rec<<endl;
    return;
  }
  for(int j=i;j<rec.size();j++)
  {
    swap(rec[i],rec[j]);
    Recursion_smaller(str,rec,i+1);
  }
}
int main() {
  string str;
  cin>>str;
  string rec;
  rec=str;
  Recursion_smaller(str,rec,0);
	return 0;
}

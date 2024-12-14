#include<iostream>
#include<vector>
using namespace std;

int main()
{
int v[5]={2,5,9,45,89};
int res;
for(int i=0;i<=4;i++){
cout<<v[i]<<endl;
}
cout<<"resultado de la suma:"<<endl;
res=v[0]+v[1]+v[2]+v[3]+v[4];
cout<<res<<endl;
}
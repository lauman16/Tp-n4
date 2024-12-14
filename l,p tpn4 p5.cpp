#include<iostream>
#include<string>
using namespace std;

int main()
{
int ob;
string cad1="san marino";
string cad2="campeon";
string com=cad1+" "+cad2;
cout<<"punto 1(0)"<<endl;
cout<<"punto 2(1)"<<endl;
cout<<"punto 3(2)"<<endl;
cout<<"punto 4(3)"<<endl;
cin>>ob;
if(ob==0){
cout<<com<<endl;
}
if(ob==1){
cout<<cad2.at(6);
cout<<cad2.at(5);
cout<<cad2.at(4);
cout<<cad2.at(3);
cout<<cad2.at(2);
cout<<cad2.at(1);
cout<<cad2.at(0);
}
if(ob==2){
cout<<cad2.find("a")<<endl;
}
if(ob==3){
cout<<cad2.length()<<endl;
}

return 0;
}
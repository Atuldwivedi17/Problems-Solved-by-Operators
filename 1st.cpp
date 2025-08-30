#include<iostream>
using namespace std;
int main()
{
   double temperature;
   cout<<"select the temperature: ";
   cin>>temperature;
   if( temperature>=70 && temperature<=90)
   {
    cout<<"yes"<<endl;

   }
   else{
    cout<<"no"<<endl;
   }
   return 0;

}
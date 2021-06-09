#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<"\t"<<"is a non prime number"<<endl;
            break;
        }        
    } 
    if(i==n){
    cout<<"It is prime number";}
    return 0;
}
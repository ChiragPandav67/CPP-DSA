#include<iostream>
using namespace std;
int main(){
    cout<<"Principle amount:";
    float p;
    cin>>p;
    
    cout<<"Rate of interest:";
    float r;
    cin>>r;
    
    cout<<"Time period:";
    float t;
    cin>>t;
    
    cout<<"Simple interest:";
    float si = (p*r*t)/100;
    cout<<si;
}

#include <iostream>

using namespace std;
 double f1(int n);
 double f(int a,int b);
int main()
{ int a,b ;
cout<<"enter a,b:"<<endl;
cin>>a>>b;
cout<<"answer:"<<f(a,b);


    return 0;
}
double f1(int n){
return n*n;
}
double f(int a,int b){
    double s=0;
    for(int i=1;i<=b;i++){

        a*=a;
    }
    return(a/f1(a+3*b));
}

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
setlocale(LC_ALL,"Russian");
int n,i,p,f, b,q;
cout<<"Enter array dimension. \n";
cin>>n; 
float a[n];
srand(time(0)); 
cout<<"enter the lower limit of random numbers \n"; cin>>p; 
cout<<"enter the upper limit for changing random numbers \n"; cin>>b; 
cout<<"source array: \n"; 
for (i= 0; i<n ; i=i+1) 
{ a[i]=p+rand()%(b-p+1); cout<<a[i]<<" ";}
cout<<"\n";
//int n=12;
//int a[]={-5, 0, -3, 12, 4, -2, -5, 8, 3, 1, 0, -3};
//for (int i=0; i<n; i++){
//cout<< a[i] <<" ";
//}
cout<<"\n";
f=0;
q=0;
for(int i=0; i<n-1; i++)
        {
             if ( a[i]>f)
             {
             f= a[i];
              q=i;  }
              }

cout<<  "max" <<f << "\n" << "index" << q <<" ";
cout<<"\n";
system("pause");
return 0;
}

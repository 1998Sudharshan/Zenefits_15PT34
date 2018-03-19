#include <iostream>
using namespace std;

void function(char a[],string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
 }



int main()
{
    int n;
    string b[100];
    cout<<"Enter the no.of letters:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the string:";
    getline(s,100);
}

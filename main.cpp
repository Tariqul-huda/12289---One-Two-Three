#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int test;
    string a;
//    freopen("input.txt","r",stdin);
    cin>>test;
    for(int i=0; i<test; i++)
    {
        int length =0;
        cin>>a;
        length=a.length();
        if(length==3)
        {
            if((a[0]=='o'&&(a[1]=='n' || a[2]=='e')) ||(a[1]=='n' &&(a[0]=='o'||a[2]=='e')) || (a[2]=='e' && (a[0]=='o' || a[1]=='n')))
                printf("%d\n",1);
            else if((a[0]=='t'&&(a[1]=='w' || a[2]=='o')) ||(a[1]=='w' &&(a[0]=='t'||a[2]=='o')) || (a[2]=='o' && (a[0]=='t' || a[1]=='w')))
                printf("%d\n",2);
        }

        else
        {
            printf("%d\n",3);
        }
    }
    return 0;
}

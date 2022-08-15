#include<bits/stdc++.h>
using namespace std;

bool primec(int a)
{
    if(a==0||a==1) return 0;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0) return 0;
    }
    return 1;

}


int main()
{
    int a;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while(in>>a)
    {
        if(primec(a)==1)
            out<<a<<" is prime"<<'\n';
        else
            out<<a<<" not prime"<<'\n';
    }

    in.close();
    out.close();
}



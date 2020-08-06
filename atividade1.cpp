#include<iostream>
#include<locale>
using namespace std;

void numinteiro()
{
    int val,maior,menor;
    for(int x=1;x<=3;x++)
    {
        cout<<"Insira um valor: ";
        cin>> val;
        if(x==1)
        {
            maior=val;
            menor=val;
        }
        else
        {
        if(maior<val)
            maior=val;
        if(menor>val)
            menor=val;
        }
    }
    cout<<" O maior valor lido é "<<maior<<" e o menor é "<<menor;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    numinteiro();
    return 0;
}

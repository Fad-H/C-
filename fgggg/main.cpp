#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a;
    b = a%10;
    c = a/10;
    if((b*c) + (b+c) == a)
        printf("��������");
    else
        printf("����������");

    return 0;
}

#include<stdio.h>
int main()
{
    int x=8,z=5,y=2;
    
    x= ++y + z--;
    y= y-- + ++z;
    z= x++ - --y;
    
    printf("x=%d,y=%d,z=%d",x,y,z);
    
    
    return 0;
}

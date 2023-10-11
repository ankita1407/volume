#include <iostream>
//#include<math.h>
using namespace std;
int volume(int l)
{
    return(l*l*l);
}
float volume(float l,float h)
{
    return(3.14*l*l*h);
}
int volume(int l,int b,int h)
{
    return(l*b*h);
}
int main()
{
    int v[3],n=3;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"volume of cube "<<volume(v[0]);
    cout<<"\nvolume of cylinder "<<volume(v[0],v[1]);
    cout<<"\nvolume of cuboid "<<volume(v[0],v[1],v[2]);
    return 0;
}

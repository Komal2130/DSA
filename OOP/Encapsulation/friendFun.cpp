#include<iostream>
using namespace std;

//friend function
class Box
{
    private:
        int length;
    public:
    // Box:length=0{}
        Box()
        {
            length = 0;
        }
        friend int printLength(Box);    //FriendFunction             //Declaration
} ;
int printLength(Box b)
{
    b.length +=10;                  //Definition
    return b.length;
}
int main()
{
    Box b;
    cout<<"Length of the Box: "<< printLength(b)<<endl;             //Calling
    return 0;
}

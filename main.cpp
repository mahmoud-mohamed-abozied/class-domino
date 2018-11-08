#include <iostream>
#include <string>
using namespace std;

class Domino
{
    public:
    int left_side ,right_side , *data ;

Domino ()
{
    left_side = 0;
    right_side = 0;

}

Domino (int left_side , int right_side)
{
    this->left_side=left_side;
    this->right_side=right_side;

}

string toString ()
{

    for (int left_side=0 ; left_side<=6 ;left_side++)
    {
    for (int right_side=left_side; right_side<=6 ;right_side++)
    {
        cout<<left_side<<"-"<<right_side<<" "<<"domino"<<endl;
        }
    }

}



int getLeftDots ()
{
    return left_side;
}

int getRightDots ()
{
    return right_side;
}

};


ostream& operator<<(ostream& out,  Domino dom)
{
    out << dom.toString();
    out << " ";
    out << endl;

return out ;
}

int main()
{
    Domino d1;
    cout<<d1;

    cout<<Domino();

    return 0;
}

#include <iostream>

using namespace std;
float area(float x, float y)
{
    cout<<"Area: "<<(0.5)*x*y<<" units.";
}
double area(double len, double breadth)
{
        cout<<"Area: "<<len*breadth<<" units.";
}
float area(float radius)
{
        cout<<"Area: "<<(3.14)*radius*radius<<" units.";
}
int main()
{
    int i;
    float a,b,r;
    double l,w;
    cout <<"Please choose a shape: \n1.Triangle 2.Rectangle 3.Circle\n";
    cin>>i;
    switch(i)
    {
        case 1: cout<<"Enter base and height of the triangle: ";
                cin>>a>>b;
                area(a,b);
                break;
        case 2: cout<<"Enter length and breadth of the rectangle: ";
                cin>>l>>w;
                area(l,w);
                break;
        case 3: cout<<"Enter radius of the circle: ";
                cin>>r;
                area(r);
                break;
        default:cout<<"Wrong choice!\n";
    }

    return 0;
}

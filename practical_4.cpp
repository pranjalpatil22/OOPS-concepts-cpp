 #include<iostream>
using namespace std;

float area(float radius)
{
    return 3.14*radius*radius;
}
float area(float height , float width)
{
    return height*width;
}
float area(float Height , float Width , float Depth)
{
    return Height*Width*Depth;
}
int main()
{
    float radius,height,width,Height,Width,Depth;
    cout << "Enter the radius of circle : ";
    cin>>radius;
    cout<< "The area of circle is "<<area(radius)<<endl;

    cout << "Enter the height of rectangle : ";
    cin>>height;
    cout << "Enter the height of rectangle : ";
    cin>>width;
    cout<< "The area of rectangle is "<<area(height,width)<<endl;
    cout << "Enter the height of cuboid : ";
    cin>>Height;
    cout << "Enter the height of cuboid : ";
    cin>>Width;
    cout << "Enter the height of cuboid : ";
    cin>>Depth;
    cout<< "The area of rectangle is "<<area(Height,Width,Depth)<<endl;
    return 0;
}

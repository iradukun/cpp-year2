#include<iostream>
using namespace std;
class Rectangle{
    int width;int height;

    public:
    Rectangle(int width,int height){
        width = width;
        height=height;

    }
    int area();

}
int Rectangle::area(){
    return width*height;
}
void display(Rectangle rect){
    cout<<rect.area();
}

int main(){
Rectangle rect(20,40);
cout<<"area"<<rect.area()<<endl;
return 0;
}
#include <iostream>
#include <vector>

class Shape {
    public:
        //lets make this a pure virtual function
        virtual void draw() = 0; //defining a pure function

        virtual Shape(){}; //this is a deconstructor 
};

class Point : public Shape{
    public:
        int x, y;
        Point(int x, int y): x(x), y(y){}
        void draw(){
            std::cout << "(" << x << "," << y << ")";
        }
};

class Rectangle : public Shape{
    public:

        Point p;
        int w, h;
        Rectangle(Point p, int w, int h): p(p), w(w), h(h){}

        bool is_sqaure(){
            return w == h;
        }

        virtual void draw(){
            p.draw();
            std::cout << "[" << w << "," << h << "]";
        }
};


int main(){
    std::vector<Shape*> v;
    v.push_back(new Point{5, 7})
    v.push_back(new Rectangle{Point{4, 6}, 10, 15});

    for(Shape* s : v){
        s->draw();
        std::cout << std::endl;
    }


    p->draw();

    return 0;
}
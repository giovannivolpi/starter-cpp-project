#ifndef __2DGRAPHICS__H__
#define __2DGRAPHICS__H__

class Point {
    public:
     Point();
     Point(int x, int y);
     Point& moveTo(int x, int y);
     const Point& print() const;





    private:
    int x, y;
};

class Line{

    public:
     Line(const Point& p);
     Line(const Point& p, const Point& q);
     void draw() const;



    private:
     Point a, b;

};


class rectangle {

    public:
     rectangle(int w, int h);
     rectangle(int x, int y, int w, int h);
     rectangle(const Point& p, int w, int h);
     void draw() const;
     bool is_sqaure() const;

    private:
     int w, h;
     Point p;

};

//delegation 
class square : public rectangle{
    square(int w): rectangle(w, w){}
    square(int x, int y, int w): rectangle(x, y, w, w){}//this is the implimentation, not statement
    square(const Point& p, int w): rectangle(p, w, w){}//inheritance
}; //constructors are not inherited !! 
//is a = generalization 
// has a  = composition



#endif
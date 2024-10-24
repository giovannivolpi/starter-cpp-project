#ifndef __2DGRAPHICS__H__
#define __2DGRAPHICS__H__

class Point {
    public:
     Point();
     Point(int x, int y);
     Point& moveTo(int x, int y);
     void print() const;





    private:
    int x, y;
};

#endif
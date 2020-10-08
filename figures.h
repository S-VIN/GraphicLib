#include <string>
enum EFIGURETYPE { LINE, DOT, ELLIPSE, SQUARE, CIRCLE, RECTUNGLE, TRIANGLE, TEXT, BITMAP };

struct Point {
  int x;
  int y;
  
  Point(int _x = 0, int _y = 0){
    x = _x;
    y = _y;
  }
};

class Figure{
  Point zeroPoint;
  EFIGURETYPE type;
  Figure(Point _point, EFIGURETYPE _type){
    zeroPoint = _point;
    type = _type;
  }
};

struct Dot(Point _point) : Figure(_point, ){
};

struct Line{
  Point firstPoint;
  Point secondPoint;
};

struct Square{
  Point point;
  int side;
};

struct Rectungle{
  Point point;
  Point firstSide;
  Point secondSide;
};

struct Circle{
  Point centre;
  int diametr;
};

struct Ellipse{
  Point centre;
  int firstDiametr;
  int secondDiametr;
};

struct Triangle{
  Point firstPoint;
  Point secondPoint;
  Point thirdPoint;
};

struct Text{
  std:: string text;
  Point point;
};

struct Bitmap{
  Point point;
};

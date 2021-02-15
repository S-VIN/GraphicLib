#include <string>
enum EFIGURETYPE {
  LINE,
  DOT,
  ELLIPSE,
  SQUARE,
  CIRCLE,
  RECTUNGLE,
  TRIANGLE,
  TEXT,
  BITMAP
};

struct Point {
  int x;
  int y;

  Point(int _x = 0, int _y = 0) {
    x = _x;
    y = _y;
  }
};

struct Figure {
  Point zeroPoint;
  EFIGURETYPE type;
  Figure(Point _point, EFIGURETYPE _type) {
    zeroPoint = _point;
    type = _type;
  }
};

struct Dot : Figure {
  Dot(Point _point) : Figure(_point, DOT) {}
};

struct Line : Figure {
  Point firstPoint;
  Line(Point _zeroPoint, Point _firstPoint) : Figure(_zeroPoint, LINE) {}
};

struct Square: Figure {
  int side;
  Square(Point _point, int _side): Figure(_point, SQUARE){
    side = side;
  }
};

struct Rectungle : Figure {
  Point firstSide;
  Point secondSide;
  Rectungle(Point _point, int _firstSide, int _secondSide):Figure(_point, RECTUNGLE){
    firstSide = _firstSide;
    secondSide = _secondSide;
  }
};

struct Circle : Figure {
  int diametr;
  Circle(Point _point, int _diametr):Figure(_point, CIRCLE){
    diametr = _diametr;
  }
};

struct Ellipse : Figure {
  int firstDiametr;
  int secondDiametr;
  Ellipse(Point _point, int _firstDiametr, int _secondDiametr):Figure(_point, ELLIPSE){
    firstDiametr = _firstDiametr;
    secondDiametr = _secondDiametr;
  }
};

struct Triangle : Figure {
  Point firstPoint;
  Point secondPoint;
  Triangle(Point _point, Point _firstPoint, Point _secondPoint): Figure(_point, TRIANGLE){
    firstPoint = _firstPoint;
    secondPoint = _secondPoint;
  }
};

struct Text : Figure {
  std::string text;
  Text(Point _point, std::string _text): Figure (_point, TEXT){
    text = _text;
  }
};
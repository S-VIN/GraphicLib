#include <string>
enum figureType { LINE, DOT, ELLIPSE, SQUARE, CIRCLE, RECTUNGLE, TRIANGLE, TEXT, BITMAP };

struct Point {
  int x;
  int y;
};

struct Dot{
  Point coordinates;
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

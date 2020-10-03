#include <iostream>
#include <vector>

enum type { SQUARE, CIRCLE };

struct Point {
  int x;
  int y;
};

struct Figure {
  int type;
  Point point;
  int side;
};

class Vector {
private:
  std::vector<Figure> arrayOfFigures;

public:
  Vector();
  void addSquare(Point point, int side);
  void addCircle(Point point, int diametr);
  void addLine(Point firstPoint, Point secondPoint);
  void clearFigures();
  bool isFilled(Point point);
  ~Vector();
};

Vector::Vector() {}

Vector::~Vector() {}

void Vector:: addSquare(Point point, int side){
    arrayOfFigures.push_back({SQUARE, point, side});
}

void Vector:: addCircle(Point point, int diametr){
    arrayOfFigures.push_back({CIRCLE, point, diametr});
}

void Vector:: addLine(Point firstPoint, Point secondPoint){}
void Vector:: clearFigures(){
    arrayOfFigures.clear();
}

bool Vector:: isFilled(Point point){
    for(auto item : arrayOfFigures){
        switch (item.type)
        {
        case SQUARE:
            if(point.x <= item.point.x + item.side && 
               point.x >= item.point.x &&
               point.y <= item.point.y &&
               point.y >= item.point.y - item.side){
                   return true;
               }
            break;
        
        default:
            break;
        }
    }
    return false;
}

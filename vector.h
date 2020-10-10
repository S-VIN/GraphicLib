#include <iostream>
#include <vector>
#include "figures.h"

using namespace std;

class Vector {
private:
vector <Figure*> figures;
bool isSquareHere(Point point, Square * square);

public:
  Vector();
  void addFigure(Figure * figure);
  void deleteFigure(int i = 0);
  Figure* getFigure(int number);
  bool isFilled(Point point);
  ~Vector();
};

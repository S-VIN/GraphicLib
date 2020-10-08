#include <iostream>
#include <vector>
#include <figures.h>



class Vector {
private:


  std::vector<std::vector<int>> figures;
  std::vector<Dot> arrayOfDots;
  std::vector<Line> arrayOfLines;
  std::vector<Ellipse> arrayOfEllipses;
  std::vector<Square> arrayOfSquares;
  std::vector<Circle> arrayOfCircles;
  std::vector<Rectungle> arrayOfRectungles;
  std::vector<Triangle> arrayOfTriangles;
  std::vector<Text> arrayOfText;
  std::vector<Bitmap> arrayOfBitmaps;

  bool isSquareHere(Point point, Square square);
  bool isCircleHere(Point point, Circle circle);
  bool isLineHere(Point point, Line line);
  bool isDotHere(Point point, Dot dot);
  bool isEllipseHere(Point point, Ellipse ellipse);
  bool isRectungleHere(Point point, Rectungle rectungle);
  bool isTriangleHere(Point point, Triangle triangle);
  bool isTextHere(Point point, Text text);
  bool isBitmapHere(Point point, Bitmap bitmap);

public:
  Vector();

  void addSquare(Point point, int side);
  void addRectungle(Point point, int firstSide, int secondSide);
  void addTriangle(Point firstPoint, Point secondPoint, Point thirdPoint);
  void addCircle(Point point, int diametr);
  void addLine(Point firstPoint, Point secondPoint);
  void clearFigures();
  bool isFilled(Point point);
  ~Vector();
};

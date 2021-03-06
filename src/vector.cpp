#include "../headers/vector.h"

Vector::Vector() {}

Vector::~Vector() {}

void Vector:: addFigure(Figure* figure){
    figures.push_back(figure);
};

void Vector:: deleteFigure(int i){
    figures.erase(figures.begin() + i);
}


bool Vector:: isSquareHere(Point point, Square* square){
  if(point.x <= square->zeroPoint.x + square->side && 
               point.x >= square->zeroPoint.x &&
               point.y <= square->zeroPoint.y &&
               point.y >= square->zeroPoint.y - square->side){
                   return true;
               }
  return false;
}

bool Vector:: isDotHere(Point point, Dot* dot){
    if(point.x == dot->zeroPoint.x && point.y == dot->zeroPoint.y){
        return true;
    }
    return false;
}

bool Vector::isLineHere(Point point, Line *line) {
    return false;//////////////////////////////
}

Figure * Vector:: getFigure(int number){
    return figures[number];
};


bool Vector:: isFilled(Point point){
    for(auto item : figures){
        switch (item->type)
        {
        case SQUARE:
            if(isSquareHere(point, (Square*)item))
                return true;
            break;
        case LINE:
                if(isLineHere(point, (Line*)item))
                    return true;
                break;
        case DOT:
            if(isDotHere(point, (Dot*)item))
                return true;
            break;


        default:
            break;
        }
    }
    return false;
}

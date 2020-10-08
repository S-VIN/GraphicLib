#include "vector.h"

Vector::Vector() {}

Vector::~Vector() {}

bool Vector:: isSquareHere(Point point, Square square){
  if(point.x <= square.point.x + square.side && 
               point.x >= square.point.x &&
               point.y <= square.point.y &&
               point.y >= square.point.y - square.side){
                   return true;
               }
  return false;
}

bool Vector:: isFilled(Point point){
    for(auto item : figures){
        switch (item.type)
        {
        case SQUARE:
            if(isSquareHere(point, item))
                return true;
            break;
        
        default:
            break;
        }
    }
    return false;
}

#include "../../Header/Robot/Position.h"

Position::Position(int newX, int newY) : x(newX), y(newY) {
}

int Position::getX() {
    return Position::x;
}

int Position::getY() {
    return Position::y;
}

void Position::setX(int x) {
    Position::x = x;
}

void Position::setY(int y) {
    Position::y = y;
}

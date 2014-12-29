#include "../../Header/Robot/Position.h"

Position::Position(int x, int y) : x(x), y(y) {
}

Position::Position(const Position& p) : x(p.x), y(p.y) {
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

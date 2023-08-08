#include <iostream>

class Shape {
public:
    virtual int get_point_count() const = 0; // 꼭지점의 개수를 반환하는 순수 가상 함수
    virtual void get_position() const = 0;   // 위치를 출력하는 순수 가상 함수
};

class RectangleShape : public Shape {
private:
    double width;  // 너비
    double height; // 높이

public:
    RectangleShape(double w, double h) : width(w), height(h) {}

    int get_point_count() const override {
        return 4; // 사각형은 4개의 꼭지점을 가지고 있음
    }

    void get_position() const override {
        std::cout << "사각형의 위치: (x, y)" << std::endl;
    }

    double get_width() const {
        return width;
    }

    double get_height() const {
        return height;
    }
};

class CircleShape : public Shape {
private:
    double radius; // 반지름

public:
    CircleShape(double r) : radius(r) {}

    int get_point_count() const override {
        return 0; // 원형은 꼭지점이 없음
    }

    void get_position() const override {
        std::cout << "원의 위치: (x, y)" << std::endl;
    }

    double get_radius() const {
        return radius;
    }
};

int main() {
    // 객체 생성
    RectangleShape rectangle(5.0, 3.0);
    CircleShape circle(2.5);

    // 사각형 정보 출력
    std::cout << "사각형의 꼭지점 개수: " << rectangle.get_point_count() << std::endl;
    rectangle.get_position();
    std::cout << "사각형의 너비: " << rectangle.get_width() << ", 높이: " << rectangle.get_height() << std::endl;

    // 원 정보 출력
    std::cout << "원의 꼭지점 개수: " << circle.get_point_count() << std::endl;
    circle.get_position();
    std::cout << "원의 반지름: " << circle.get_radius() << std::endl;

    return 0;
}

#include <iostream>

class Shape {
public:
    virtual int get_point_count() const = 0; // �������� ������ ��ȯ�ϴ� ���� ���� �Լ�
    virtual void get_position() const = 0;   // ��ġ�� ����ϴ� ���� ���� �Լ�
};

class RectangleShape : public Shape {
private:
    double width;  // �ʺ�
    double height; // ����

public:
    RectangleShape(double w, double h) : width(w), height(h) {}

    int get_point_count() const override {
        return 4; // �簢���� 4���� �������� ������ ����
    }

    void get_position() const override {
        std::cout << "�簢���� ��ġ: (x, y)" << std::endl;
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
    double radius; // ������

public:
    CircleShape(double r) : radius(r) {}

    int get_point_count() const override {
        return 0; // ������ �������� ����
    }

    void get_position() const override {
        std::cout << "���� ��ġ: (x, y)" << std::endl;
    }

    double get_radius() const {
        return radius;
    }
};

int main() {
    // ��ü ����
    RectangleShape rectangle(5.0, 3.0);
    CircleShape circle(2.5);

    // �簢�� ���� ���
    std::cout << "�簢���� ������ ����: " << rectangle.get_point_count() << std::endl;
    rectangle.get_position();
    std::cout << "�簢���� �ʺ�: " << rectangle.get_width() << ", ����: " << rectangle.get_height() << std::endl;

    // �� ���� ���
    std::cout << "���� ������ ����: " << circle.get_point_count() << std::endl;
    circle.get_position();
    std::cout << "���� ������: " << circle.get_radius() << std::endl;

    return 0;
}

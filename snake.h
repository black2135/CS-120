struct color {
    double red;
    double green;
    double blue;
};
struct point {
    // public fields
    // integers because pixels can't be divided
    int x;
    int y;

    point();
    point(int xIn, int yIn);
};

class Shape {
public:
    // Constructors
    Shape();
    // Getters
    point getCenter() const;
    color getBorderColor() const;
    color getFillColor() const;
    double getArea() const;
    double getPerimeter() const;

    // Setters
    void setCenter(point c);
    void setCenter(int xIn, int yIn);
    void move(int deltaX, int deltaY);
    void setBorderColor(color b);
    void setBorderColor(double r, double g, double b);
    void setFillColor(color f);
    void setFillColor(double r, double g, double b);
    virtual void draw() const = 0;

protected:
    point center;
    color border;
    color fill;
    double area;
    double perimeter;
};
class Rectangle_Wall: public Shape {
private:
	double length;
    	double width;

public:
    Rectangle_Wall();
    // Getters
    double getLength() const;
    double getWidth() const;
	// Setters
    void setDimensions(double l, double w);
    void setAreaAndLength(double a, double l);
    void setAreaAndWidth(double a, double w);
    void draw() const override;}

class Circle_Snake: public Shape {
private:
    double radius;
    int point;
public:
    // Constructors
    Circle();
// Getter
    double getRadius() const;
    int getPoint() const;
    // Setter
    void setPoint(int pt);
    void setRadius(double rad);

    void draw() const override;};

class Fruit_shape{
public:
    // Constructors
    Shape();
    // Getters
    point getCenter() const;
    color getBorderColor() const;
    color getFillColor() const;
    double getArea() const;
    double getPerimeter() const;

    // Setters
    void setCenter(point c);
    void setCenter(int xIn, int yIn);
    void move(int deltaX, int deltaY);
    void setBorderColor(color b);
    void setBorderColor(double r, double g, double b);
    void setFillColor(color f);
    void setFillColor(double r, double g, double b);
    virtual void draw() const = 0;

protected:
    point center;
    color border;
    color fill;
    double area;
    double perimeter;
    virtual void countpoint() const = 0;
};

class GoodFruit:public Fruit{
private:
	int points;
	void countpoint() const = 0;
public:
	 void eat() override;//override, positive feedback
	
};

class BadFruit:public Fruit{
private:
	int points;
	int xposition;
	int yposition;
	int points;
public:
	void countpoint() const = 0;
	 virtual void eat() override;//override, negative feedback
};

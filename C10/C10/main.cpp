//
//  main.cpp
//  C10
//
//  Created by Yvan Feng on 17/4/4.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>


class Point {
    
private:
    int x;
    int y;
    
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    
    void add(Point p){
        add(p.x,p.y);
    }
    
    void add(int x,int y){
        this->x += x;
        this->y += y;
    }
    
    void operator+=(Point p){
        add(p);
    }
};

int main(int argc, const char * argv[]) {
//    Point p = Point(2,2);
    Point p(2,2);
    p.add(Point(3,3));
//    p.add(10, 10);
    p+=Point(4,4);
    
    std::cout << p.getX() << "---" << p.getY() << "\n";
    return 0;
}

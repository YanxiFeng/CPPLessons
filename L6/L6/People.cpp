//
//  People.cpp
//  CPPLesson1
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include "People.hpp"

//People::People(){
//    this->age = 10;
//    this->sex = 0;
//}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getAge(){
    return this->age;
}

int People::getSex(){
    return this->sex;
}

void People::sayHello(){
    printf("People:Hello \n");
}

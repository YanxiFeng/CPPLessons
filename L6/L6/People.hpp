//
//  People.hpp
//  CPPLesson1
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>


class People {
    
private:
    int age;
    int sex;
    
public:
//    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
    //    void sayHello(){
    //        printf("Hello \n");
    //    }
};
#endif /* People_hpp */



//
//  Man.cpp
//  CPPL3
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include "Man.hpp"

//在子类执行父类的构造方法
Man::Man(int age):People(age,1){
    //指定某个类的方法,不仅是父类 
    People::sayHello();
}

void Man::sayHello(){
//    People::sayHello();
    printf("Man:Hello\n");
}

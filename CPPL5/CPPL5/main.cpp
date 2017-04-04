//
//  main.cpp
//  CPPL5
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    
    Man *m = new Man(20);
    printf("age:%d\n",m->getAge());
    
    People *p = new People(30,1);
    printf("age:%d\n",p->getAge());
    
    Man m1 = Man(20);
    m1.getAge();
    
//    Man *m1 = new Man(20);
//    printf("age:%d",m1->getAge());

    
    return 0;
}

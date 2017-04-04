//
//  main.cpp
//  L7
//
//  Created by Yvan Feng on 17/4/3.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>
#include "Man.hpp"

int main(int argc, const char * argv[]) {
    
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    
    
    return 0;
}

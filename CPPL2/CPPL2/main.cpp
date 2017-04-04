//
//  main.cpp
//  CPPL2
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>
#include "People.hpp"

//命名空间
using namespace Yvan;

int main(int argc, const char * argv[]) {
    
    People *p = new People();
    p->sayHello();
    
    return 0;
}

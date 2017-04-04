//
//  Man.hpp
//  CPPL3
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>
#include "People.hpp"

class Man:public People {
    
    
public:
//    Man();
    Man(int age);
    void sayHello();

};

#endif /* Man_hpp */

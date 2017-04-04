//
//  main.cpp
//  L6
//
//  Created by Yvan Feng on 17/4/3.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>
#include "Man.hpp"
#include "Animal.hpp"

int main(int argc, const char * argv[]) {
    
    Man *m = new Man(20);
    m->People::sayHello();
    

    Animal *a =new Animal();
    a->eat();
    
    return 0;
}

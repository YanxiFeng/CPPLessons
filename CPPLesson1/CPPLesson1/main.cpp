//
//  main.cpp
//  CPPLesson1
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>
#include "People.hpp"

//class People {
//    
//    
//public:
//    void sayHello(){
//        printf("Hello World!\n");
//    }
//};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    People *p = new People();
    p->sayHello();
    delete p;
    
//    malloc(<#size_t __size#>)
//    free(<#void *#>)
    
    return 0;
}

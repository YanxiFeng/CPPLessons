//
//  main.cpp
//  CPPL4
//
//  Created by Yvan Feng on 17/4/2.
//  Copyright © 2017年 Yvan Feng. All rights reserved.
//

#include <iostream>

class Object {
  
public:
    
    Object(){
        printf("create object\n");
    }
    
    ~Object(){
        printf("delete object\n");
    }
    
    
};

void runObject(){
    {
        
    }
    Object obj;
    
    printf("run end\n");
}

int main(int argc, const char * argv[]) {
    
//    Object *obj = new Object();
//    delete obj;
    
//    Object o;
    runObject();
    
    return 0;
}

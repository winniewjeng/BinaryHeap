//
//  main.cpp
//  Heap
//
//  Created by Winnie Jeng on 5/14/19.
//  Copyright © 2019 Winnie Jeng. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <cstdlib>
#include "BinaryHeap.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Heap<int> h;

    
    for (int i = 1; i < 12; ++i)
        h.insert(i);
    
    h.print();
    
    
    return 0;
}

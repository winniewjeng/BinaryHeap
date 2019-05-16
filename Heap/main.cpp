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
    
    
    //    for (int i = 1; i < 12; ++i)
    //        h.insert(i);
    
    h.insert(57);
    h.insert(98);
    h.insert(86);
    h.insert(97);
    h.insert(29);
    h.insert(75);
    h.insert(70);
    h.insert(36);
    h.insert(20);
    h.insert(44);
    h.insert(88);

    h.print();
    h.remove();
    h.print();
    h.remove();
    h.print();
    h.remove();
    h.print();
    h.remove();
    h.print();
    
    
    
    
    return 0;
}

//
//  queue.h
//  leetcode
//
//  Created by Xiaoya Hang on 10/4/14.
//  Copyright (c) 2014 Xiaoya Hang. All rights reserved.
//

#ifndef leetcode_queue_h
#define leetcode_queue_h

#include <iostream>

using namespace std;

class Queue{
public:
    int *que;
    int first;
    int last;
    unsigned int length;
    int number;
public:
    Queue(int num);
    void Enqueue(int elem);
    void Dequeue();
};

#endif

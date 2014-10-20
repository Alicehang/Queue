//
//  queue.cpp
//  leetcode
//
//  Created by Xiaoya Hang on 10/4/14.
//  Copyright (c) 2014 Xiaoya Hang. All rights reserved.
//

#include "queue.h"

Queue::Queue(int num){
    length=num;
    que=new int[num];
    first=0;
    last=0;
    number=0;
}
void Queue::Enqueue(int elem)
{
    if(number==length)
    {
        std::cout<<"The queue is full. Integer can not be added.\n";
    }else{
        if(last>length-1)
        {
            last-=length;
        }
        que[last]=elem;
        number++;
        last++;
        std::cout<<"Enqueue"<<elem<<"\n";
    }
}

void Queue::Dequeue()
{
    if(number==0)
    {
        first=0;
        last=0;
        std::cout<<"The queue is empty. No integer can be dequeued.\n";
    }else{
        number--;
        std::cout<<"Dequeue"<<que[first]<<"\n";
        if(first==length-1)
        {
            first=0;
        }else{
            first++;
        }
    }
}


//
//  test.cpp
//  leetcode
//
//  Created by Xiaoya Hang on 10/4/14.
//  Copyright (c) 2014 Xiaoya Hang. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "queue.h"
using namespace std;
int main(int argc, char * argv[]) {
    int len=1;  //default value
    len=atoi(argv[1]);
    std::cout<<"Length of the Queue"<<len<<"\n";
    
    Queue myQueue(len);
    std::cout<<"The test for enqueuing 2*queue_length numbers, and dequeuing 2*queue_length numbers"<<"\n";
    std::cout<<"----------------------------------------------------"<<"\n";
    for(int i=0;i<2*len;i++)
    {
        myQueue.Enqueue(i);
    }
    for(int j=0;j<len*2;j++)
    {
        myQueue.Dequeue();
    }
    std::cout<<"----------------------------------------------------"<<"\n";
    std::cout<<"The test for enqueuing queue_length/2 numbers, and dequeuing queue_length numbers"<<"\n";
    std::cout<<"----------------------------------------------------"<<"\n";
    for(int i=0;i<len/2;i++)
    {
        myQueue.Enqueue(i);
    }
    
    for(int j=0;j<len;j++)
    {
        myQueue.Dequeue();
    }
    std::cout<<"----------------------------------------------------"<<"\n";
    std::cout<<"The test for repeat 3 times process of enqueuing queue_length numbers, and dequeuing queue_length/2 numbers"<<"\n";
    std::cout<<"----------------------------------------------------"<<"\n";
    int j=0;
    while(j<3)
    {
    for(int i=0;i<len;i++)
    {
        myQueue.Enqueue(i);
    }
    for(int j=0;j<len/2;j++)
    {
        myQueue.Dequeue();
    }
        j++;
    }
    
    std::cout<<"----------------------------------------------------"<<"\n";
    return 0;
}
//
//  Structures.cpp
//  000_Structures
//
//  Created by Chao Li on 5/26/15.
//  Copyright (c) 2015 Chao Li. All rights reserved.
//

#include "Structures.h"

ListNode::ListNode(int x):
next(nullptr),
val(x)
{
}

ListNode::ListNode():
next(nullptr),
val(-1)
{
}
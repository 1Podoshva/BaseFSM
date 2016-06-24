//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import "BaseStateTransition.h"
#import "BaseState.h"


@implementation BaseStateTransition {

}

- (instancetype)initWithIsOriginTransition:(BOOL)isOriginTransition fromState:(BaseState *)fromState targetState:(BaseState *)targetState transitionEvent:(int)transitionEvent {
    self = [super init];
    if (self) {
        self.isOriginTransition = isOriginTransition;
        _fromState = fromState;
        _targetState = targetState;
        _transitionEvent = transitionEvent;
    }

    return self;
}

@end
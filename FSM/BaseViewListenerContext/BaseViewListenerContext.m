//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import "BaseViewListenerContext.h"
#import "BaseState.h"
#import "BaseStateMachine.h"

@implementation BaseViewListenerContext {
    BaseStateMachine *_states;
}

- (id)initWithStates:(BaseStateMachine *)states view:(UIView *)view {
    self = [super init];
    if (self) {
        _view = view;
        _states = states;
    }
    return self;
}

- (BaseState *)currentState {
    _states.currentState;
}

@end
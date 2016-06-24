//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import "BaseState.h"
#import "BaseStateContext.h"

@implementation BaseState {

}

- (instancetype)initWithContext:(BaseStateContext *)context {
    self = [super init];
    if (self) {
        _context = context;
    }

    return self;
}

- (int)stateID {
    /* to be overwritten */
    NSLog(@"none StateID was set for the state ");
    return 0;
}


- (void)stateEnter:(void (^)())complete fromStateID:(int)fromStateID {
    complete();
}

- (void)stateExit:(int)nextStateID complete:(void (^)())complete {
    complete();
}

@end
//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BaseStateContext;


@interface BaseState : NSObject
@property (nonatomic, strong, readonly) BaseStateContext *context;

// this methods need override with your type StateContext

- (instancetype)initWithContext:(BaseStateContext *)context;

// this methods need override return your stateID enum

- (int)stateID;

// this methods need override with your stateID enum

- (void)stateEnter:(void (^)())complete fromStateID:(int)fromStateID;

- (void)stateExit:(int)nextStateID complete:(void (^)())complete;

@end
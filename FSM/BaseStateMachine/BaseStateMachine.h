//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BaseState;
@class BaseStateTransition;

@interface BaseStateMachine : NSObject
@property (nonatomic, strong, readonly) BaseState *currentState;

// this methods need override with your type base state, enums
// BaseStateTransition will need added in implementation array in child class

- (void)addTransition:(BaseStateTransition *)transition;
- (void)addTransition:(BaseState *)fromState targetState:(BaseState *)targetState transitionEvent:(int)transitionEvent isOriginTransition:(BOOL)isOriginTransition;
- (void)performOriginTransition;

- (void)performTransition:(BaseStateTransition *)transition completeEnter:(void (^)())complete;
- (void)postTransitionEvent:(int)event complete:(void (^)())complete;

@end
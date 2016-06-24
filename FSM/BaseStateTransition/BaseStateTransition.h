//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BaseState;


@interface BaseStateTransition : NSObject

@property(nonatomic, assign) BOOL isOriginTransition;
@property(nonatomic, strong, readonly) BaseState *fromState;
@property(nonatomic, strong, readonly) BaseState *targetState;
@property(nonatomic, assign, readonly) int transitionEvent;

// // this methods need override with your type type base States and enum transition

- (instancetype)initWithIsOriginTransition:(BOOL)isOriginTransition fromState:(BaseState *)fromState targetState:(BaseState *)targetState transitionEvent:(int)transitionEvent;

// this methods need override return your type base States and enum transition

- (BaseState *)fromState;

- (BaseState *)targetState;

- (int)transitionEvent;

@end
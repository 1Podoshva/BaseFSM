//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>


@class UIView;
@class BaseState;
@class BaseStateMachine;

@interface BaseViewListenerContext : NSObject
@property (nonatomic, strong, readonly) UIView *view;
@property (nonatomic, strong, readonly) BaseState *currentState;


// this methods need override with your type BaseStateMachine and view

- (id)initWithStates:(BaseStateMachine *)states view:(UIView *)view;

// this methods need override return your type BaseStateMachine and view

- (BaseState *)currentState;

- (UIView *)view;


@end
//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>


@class UIView;

@interface BaseStateContext : NSObject
@property (nonatomic, strong, readonly) UIView *view;
@property (nonatomic, strong, readonly) NSObject *model;

// this methods need override with your type view and model

- (instancetype)initWithView:(UIView *)view model:(NSObject *)model;

// this methods need override return your type view and model

- (UIView *)view;

- (NSObject *)model;

// this method need override with your enum type

- (void)postEvent:(int)event;

@end
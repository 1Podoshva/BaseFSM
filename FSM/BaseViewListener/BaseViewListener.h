//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import <Foundation/Foundation.h>


@class UIView;
@class BaseViewListenerContext;
@interface BaseViewListener : NSObject

// this methods need override with your type BaseViewListenerContext

- (instancetype)initWithContext:(BaseViewListenerContext *)context;

@end
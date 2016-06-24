//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import "BaseStateContext.h"


@implementation BaseStateContext

- (instancetype)initWithView:(UIView *)view model:(NSObject *)model {
    self = [super init];
    if (self) {
        _view = view;
        _model = model;
    }

    return self;
}


@end
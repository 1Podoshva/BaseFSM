//
// Created by Aliaksandr Zhadzko on 24.06.16.
// Copyright (c) 2016 Podoshva. All rights reserved.
//

#import "BaseViewListener.h"



@interface BaseViewListener ()
@property (nonatomic, strong, readonly) BaseViewListenerContext *context;
@end

@implementation BaseViewListener {

}

- (instancetype)initWithContext:(BaseViewListenerContext *)context {
    self = [super init];
    if (self) {
        _context = context;
    }

    return self;
}


@end
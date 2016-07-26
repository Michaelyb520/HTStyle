//
//  UIView+Extension.h
//
//  Created by apple on 14-10-7.
//  Copyright (c) 2014年 All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;

@property (nonatomic, assign) CGPoint point;

/** 使用时第一次是(真) (第一次取值为真:其它都是假) */
@property(nonatomic,assign,readonly) BOOL isOnlyonceTrue;

@end


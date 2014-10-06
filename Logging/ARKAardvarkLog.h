//
//  ARKAardvarkLog.h
//  Aardvark
//
//  Created by Dan Federman on 10/4/14.
//  Copyright (c) 2014 Square, Inc. All rights reserved.
//

@interface ARKAardvarkLog : NSObject <NSCopying>

- (instancetype)initWithText:(NSString *)text image:(UIImage *)image type:(ARKLogType)type;

@property (nonatomic, copy, readonly) NSDate *createdAt;
@property (nonatomic, copy, readonly) NSString *text;
@property (nonatomic, strong, readonly) UIImage *image;
@property (nonatomic, assign, readonly) ARKLogType type;

@end
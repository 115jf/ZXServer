//
//  ZXResult.h
//  ZXSDK
//
//  Created by 绝非 on 2020/7/8.
//  Copyright © 2020 绝非. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface ZXResult : NSObject


@property (nonatomic, assign) NSInteger netCode;
@property (nonatomic, strong) NSError * error;
@property (nonatomic, assign) NSInteger resultCode;
@property (nonatomic, strong) NSString * message;
@property (nonatomic, copy)id responseData;

@end

NS_ASSUME_NONNULL_END


#import <Foundation/Foundation.h>

//
//  ZXLogin.h
//  ZXSDK
//
//  Created by 绝非 on 2020/7/10.
//  Copyright © 2020 绝非. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZXLogin : NSObject


/**
 * 用户是否登录
 */
+(bool)isLogin;



/**
 * 用户手机号
 */
+(NSString *)getMobile;


@end

NS_ASSUME_NONNULL_END

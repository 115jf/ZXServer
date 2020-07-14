//
//  ZXLogin.h
//  ZXSDK
//
//  Created by 绝非 on 2020/6/24.
//  Copyright © 2020 绝非. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZXResult.h"


NS_ASSUME_NONNULL_BEGIN

typedef void(^ZXCallBack)(ZXResult *result);

@interface ZXServer : NSObject

/**
使用兑换码
@param code : 兑换码
*/

+(void)useExchangeCode:(NSString *)code
               success:(ZXCallBack)success
               failure:(ZXCallBack)failure;





/**
发送验证码
@param mobile : 手机号
*/
+(void)sendVerifyCodeWithMobile:(NSString *)mobile
                        success:(ZXCallBack)success
                        failure:(ZXCallBack)failure;






/**
校验验证码 即登录
@param param 请求参数（注意大小写）
mobile : 手机号
verifyCode : 验证码

*/
+(void)checkVerifyCodeWithParma:(NSDictionary *)param
                        success:(ZXCallBack)success
                        failure:(ZXCallBack)failure;




/**
 身份信息认证
 @param param 请求参数（注意大小写）
 IdCard : 身份证号 (不可为空)
 Name : 姓名 (不可为空)
 
 认证结果resultCode，
  0: 姓名和身份证号一致
 -1: 姓名和身份证号不一致
 -2: 非法身份证号（长度、校验位等不正确）
 -3: 非法姓名（长度、格式等不正确）
 -4: 证件库服务异常
 -5: 证件库中无此身份证记录
 */

+(void)idCardVerificationWithParma:(NSDictionary *)param
                           success:(ZXCallBack)success
                           failure:(ZXCallBack)failure;




/**
 * 初始化云服务（校验验证码成功后即登录成功后，登录一次后默认一直登录）
 */
+(void)initClient;



/**
 * 上传二进制数据至云服务（需要先初始化云服务）
 */
+ (void)uploadObjectAsync:(NSData *)data  complete:(void (^) (NSString * objectName)) completeBlock  failure:(void (^) (NSError*error)) failure;



/**
 * 下载数据（需要先初始化云服务）
*/
+ (void)downLoadObjectSuccess:(void (^)(id _Nullable downloadFilePath))success failure:(void (^)(NSError * _Nonnull error))failure;




@end

NS_ASSUME_NONNULL_END

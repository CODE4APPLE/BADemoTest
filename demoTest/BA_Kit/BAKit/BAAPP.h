//
//  BAAPP.h
//  demoTest
//
//  Created by 博爱 on 16/3/31.
//  Copyright © 2016年 博爱之家. All rights reserved.
//  IOS自定义常用控件

#import <Foundation/Foundation.h>


/*! 1、获取APP的名字 */
#define BA_APP_Name [[[NSBundle mainBundle] infoDictionary] objectForKey:BABundleName]

/*! 2、获取APP的版本号 */
#define BA_APP_Version [[[NSBundle mainBundle] infoDictionary] objectForKey:BABundleVersion]

/*! 3、获取App短式版本号 */
#define BA_APP_VersionShort [[[NSBundle mainBundle] infoDictionary] objectForKey:BABundleShortVersionString]

/*! 4、使用BALocalizedString检索本地化字符串 */
//#define BALocalizedString(key, comment) \
//[[NSBundle mainBundle] localizedStringForKey:(key) value:@"" table:@"BAKit"]

#define BALocalizedString(key, comment) NSLocalizedString(key, comment)


/*! 5、获取AppDelegate */
#define APPDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])

FOUNDATION_EXPORT NSString * _Nonnull const BABundleName;
FOUNDATION_EXPORT NSString * _Nonnull const BABundleVersion;
FOUNDATION_EXPORT NSString * _Nonnull const BABundleShortVersionString;

@interface BAAPP : NSObject

// TODO:下面的方法还没有验证

/**
 *  Executes a block on first start of the App for current version.
 *  Remember to execute UI instuctions on main thread
 *
 *  @param block The block to execute, returns isFirstStartForCurrentVersion
 */
+ (void)onFirstStart:(void (^ _Nullable)(BOOL isFirstStart))block;

/**
 *  Executes a block on first start of the App.
 *  Remember to execute UI instuctions on main thread
 *
 *  @param block The block to execute, returns isFirstStart
 */
+ (void)onFirstStartForCurrentVersion:(void (^ _Nullable)(BOOL isFirstStartForCurrentVersion))block;

/**
 *  Executes a block on first start of the App for current given version.
 *  Remember to execute UI instuctions on main thread
 *
 *  @param version Version to be checked
 *  @param block   The block to execute, returns isFirstStartForVersion
 */
+ (void)onFirstStartForVersion:(NSString * _Nonnull)version
                         block:(void (^ _Nullable)(BOOL isFirstStartForCurrentVersion))block;

/**
 *  Returns if is the first start of the App
 *
 *  @return Returns if is the first start of the App
 */
+ (BOOL)isFirstStart;

/**
 *  Returns if is the first start of the App for current version
 *
 *  @return Returns if is the first start of the App for current version
 */
+ (BOOL)isFirstStartForCurrentVersion;

/**
 *  Returns if is the first start of the App for the given version
 *
 *  @param version Version to be checked
 *
 *  @return Returns if is the first start of the App for the given version
 */
+ (BOOL)isFirstStartForVersion:(NSString * _Nonnull)version;


@end

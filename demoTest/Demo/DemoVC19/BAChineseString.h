//
//  BAChineseString.h
//  YZX_ChineseSorting
//
//  Created by Suilongkeji on 13-10-29.
//  Copyright (c) 2013年 Suilongkeji. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "pinyin.h"

@interface BAChineseString : NSObject

@property (nonatomic, strong) NSString *string;
@property (nonatomic, strong) NSString *pinYin;

/*!
 *  返回排序后的tableview右边的索引indexArray
 *
 *  @param stringArr stringArr
 *
 *  @return 返回排序后的tableview右边的索引indexArray
 */
+ (NSMutableArray *)BA_IndexArray:(NSArray*)stringArr;

/*!
 *  返回排序后的联系人数组
 *
 *  @param stringArr stringArr
 *
 *  @return 返回排序后的联系人数组
 */
+ (NSMutableArray *)BA_LetterSortArray:(NSArray*)stringArr;

/*!
 *  返回一组字母排序数组(中英混排)
 *
 *  @param stringArr stringArr
 *
 *  @return 返回一组字母排序数组(中英混排)
 */
+ (NSMutableArray *)BA_SortArray:(NSArray*)stringArr;

@end
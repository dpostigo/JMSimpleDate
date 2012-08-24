//
//  NSDateFormatter+JMSimpleDate.h
//  JMSimpleDate
//
//  Created by James Martinez on 8/23/12.
//  Copyright (c) 2012 James Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (JMSimpleDate)

+ (NSString *)formattedStringTimeElapsedFromDate:(NSDate *)date;

#pragma mark - Date Format Templates
+ (NSString *)timeFormatStringShowingSeconds:(BOOL)showSeconds;
+ (NSString *)timeFormatString;

+ (NSString *)dateFormatStringWithAmericanFormat:(BOOL)isAmerican;
+ (NSString *)dateFormatString;

+ (NSString *)timestampFormatStringWithAmericanFormat:(BOOL)isAmerican showingSeconds:(BOOL)showSeconds;
+ (NSString *)timestampFormatString;

@end
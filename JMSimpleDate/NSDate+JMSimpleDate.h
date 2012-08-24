//
//  NSDate+JMSimpleDate.h
//  JMSimpleDate
//
//  Created by James Martinez on 8/23/12.
//  Copyright (c) 2012 James Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (JMSimpleDate)

#pragma mark - Relative Dates
+ (NSDate *)dateInDays:(NSInteger)days;
+ (NSDate *)dateInHours:(NSInteger)hours;
+ (NSDate *)dateInMinutes:(NSInteger)minutes;
+ (NSDate *)dateInSeconds:(NSInteger)seconds;
+ (NSDate *)tomorrowsDate;
+ (NSDate *)yesterdaysDate;

#pragma mark - Date Comparison
- (BOOL)isOnSameDate:(NSDate *)date ignoringTimeOfDay:(BOOL)ignoreTimeOfDay;
- (BOOL)isInSameWeekAsDate:(NSDate *)date;
- (BOOL)isInSameMonthAsDate:(NSDate *)date;
- (BOOL)isInSameYearAsDate:(NSDate *)date;
- (BOOL)isEarlierThanDate:(NSDate *)date;
- (BOOL)isLaterThanDate:(NSDate *)date;

#pragma mark - Roles
- (BOOL)isToday;
- (BOOL)isTomorrow;
- (BOOL)isYesterday;
- (BOOL)isThisWeek;
- (BOOL)isNextWeek;
- (BOOL)wasLastWeek;
- (BOOL)isThisMonth;
- (BOOL)isThisYear;
- (BOOL)isNextYear;
- (BOOL)isLastYear;
- (BOOL)isWeekend;
- (BOOL)isWeekday;

#pragma mark - Date Adjustment
- (NSDate *)dateByAddingDays:(NSInteger)days;
- (NSDate *)dateBySubtractingDays:(NSInteger)days;
- (NSDate *)dateByAddingHours:(NSInteger)hours;
- (NSDate *)dateBySubtractingHours:(NSInteger)hours;
- (NSDate *)dateByAddingMinutes:(NSInteger)minutes;
- (NSDate *)dateBySubtractingMinutes:(NSInteger)minutes;
- (NSDate *)dateAtMidnight;
- (NSDateComponents *)componentsWithOffsetFromDate:(NSDate *)date;

#pragma mark - Retrieving Intervals
- (NSInteger)minutesAfterDate:(NSDate *)date;
- (NSInteger)minutesBeforeDate:(NSDate *)date;
- (NSInteger)hoursAfterDate:(NSDate *)date;
- (NSInteger)hoursBeforeDate:(NSDate *)date;
- (NSInteger)daysAfterDate:(NSDate *)date;
- (NSInteger)daysBeforeDate:(NSDate *)date;

#pragma mark - Date Decomposing
- (NSInteger)nearestHour;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)seconds;
- (NSInteger)day;
- (NSInteger)month;
- (NSInteger)week;
- (NSInteger)weekday;
- (NSInteger)nthWeekday;
- (NSInteger)year;

@end

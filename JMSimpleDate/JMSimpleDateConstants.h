//
//  JMSimpleDateConstants.h
//  JMSimpleDate
//
//  Created by James Martinez on 8/23/12.
//  Copyright (c) 2012 James Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMSimpleDateConstants : NSObject

extern NSUInteger const kSecond;
extern NSUInteger const kMinute;
extern NSUInteger const kHour;
extern NSUInteger const kDay;
extern NSUInteger const kWeek;
extern NSUInteger const kMonth;

#define DATE_COMPONENTS (NSYearCalendarUnit| NSMonthCalendarUnit | NSDayCalendarUnit | NSWeekCalendarUnit |  NSHourCalendarUnit | NSMinuteCalendarUnit | NSSecondCalendarUnit | NSWeekdayCalendarUnit | NSWeekdayOrdinalCalendarUnit)

@end

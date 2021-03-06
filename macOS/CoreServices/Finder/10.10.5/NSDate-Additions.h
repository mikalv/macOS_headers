//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Additions)
+ (id)dateWithUTCDateTime:(const struct UTCDateTime *)arg1;
+ (id)tomorrow;
+ (id)today;
+ (id)yesterday;
+ (struct TCachedRelativeDates *)cachedRelativeDates;
+ (void)recomputeCachedRelativeDates;
+ (struct TMutex *)cachedRelativeDateLock;
+ (void)computeTodayYesterdayAndTomorrow:(struct TCachedRelativeDates *)arg1;
+ (id)midnightJan1st1904;
- (struct UTCDateTime)utcDateTime;
- (_Bool)isYesterday;
- (_Bool)isToday;
@end


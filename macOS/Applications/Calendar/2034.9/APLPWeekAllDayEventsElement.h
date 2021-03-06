//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPAllDayEventElement.h"

@class NSArray, NSDate, NSFont;

@interface APLPWeekAllDayEventsElement : APLPAllDayEventElement
{
    NSArray *days;
    NSArray *alldayEvents;
    NSDate *firstDayOfWeek;
    double margin;
    double dayWidth;
    int maxEvents;
    int numDays;
    double enlargeFirstDay;
    NSFont *dayFont;
    NSFont *eventFont;
}

- (void).cxx_destruct;
- (id)description;
- (double)positionForIndex:(long long)arg1 end:(BOOL)arg2;
- (long long)indexForDate:(id)arg1;
- (void)draw;
- (struct CGSize)optimumSize;
- (void)calculateHeight;
- (BOOL)resolveWithDataSource:(id)arg1;
- (BOOL)canGrowVertically;
- (BOOL)canGrowHorizontally;

@end


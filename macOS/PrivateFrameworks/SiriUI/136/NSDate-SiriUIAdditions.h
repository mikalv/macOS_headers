//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (SiriUIAdditions)
+ (id)languagesSupportingDateOrdinals;
- (BOOL)_isDateOrdinalSupportedForLocale:(id)arg1;
- (struct _NSRange)siriui_rangeOfOrdinalDayStringInFormattedDateString:(id)arg1;
- (id)_ordinalStringWithFormat:(id)arg1;
- (id)_nonOrdinalStringForFormat:(id)arg1;
- (id)sirui_ordinalStringWithFormat:(id)arg1;
- (BOOL)siriui_isTomorrow;
- (BOOL)siriui_isToday;
- (BOOL)_siriui_isSameDayAsDate:(id)arg1;
@end


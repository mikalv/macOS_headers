//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ClearBrowsingDataController : NSObject
{
    NSArray *_availableIntervals;
}

+ (id)allTimeInterval;
@property(readonly) NSArray *availableIntervals; // @synthesize availableIntervals=_availableIntervals;
- (void).cxx_destruct;
- (void)_clearVisitedLinksForAllTabs;
- (void)_clearBackForwardListForAllTabs;
- (void)_clearDataAddedAfterDate:(id)arg1;
- (void)clearAllData;
- (void)_deleteUnusedSafariDesktopPictureFiles;
- (void)_clearOCSPCache;
- (void)_clearNonTemporalDataIncludingFavicons:(BOOL)arg1;
- (void)clearDataFromInterval:(id)arg1;
- (void)clearOnlySafariHistoryFromInterval:(id)arg1;
- (id)init;

@end


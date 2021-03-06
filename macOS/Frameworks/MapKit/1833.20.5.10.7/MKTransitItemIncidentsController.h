//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSDate, NSMutableDictionary, NSSet;
@protocol GEOTransitLineItem;

@interface MKTransitItemIncidentsController : NSObject
{
    MKMapItem *_mapItem;
    id <GEOTransitLineItem> _lineItem;
    NSArray *_validIncidents;
    NSArray *_lineFilteredValidIncidents;
    NSSet *_blockedIncidentEntities;
    NSMutableDictionary *_dominantIncidentForSequence;
    NSMutableDictionary *_systemHasIncidents;
    NSDate *_nextIncidentChangeDate;
}

+ (id)sectionHeaderText;
- (void).cxx_destruct;
- (id)_dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)_blockedIncidentEntitiesAtDate:(id)arg1;
- (id)_validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2;
- (BOOL)systemHasIncidents:(id)arg1 atDate:(id)arg2;
- (id)dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)blockedIncidentEntitiesAtDate:(id)arg1;
- (id)validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2;
- (void)resetCache;
- (void)_validateCacheForDate:(id)arg1;
- (id)initWithLineItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class GEOMapRegion, GEOMapServiceTraits, NSArray, NSData, NSString;
@protocol RAPAuxiliaryControlsRecording, RAPCurrentDirections, RAPPlace;

__attribute__((visibility("hidden")))
@interface RAPReportContext : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _showingImagery;
    BOOL _showingLabels;
    id <RAPCurrentDirections> _currentDirections;
    id <RAPPlace> _reportedPlace;
    NSArray *_searchesHistory;
    NSArray *_directionsHistory;
    double _mapZoomLevel;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_mapRegion;
    NSData *_mapSnapshotImageData;
    NSArray *_mapVisibleTileSets;
    NSString *_mapTileStateLog;
    unsigned long long _mapType;
    NSString *_currentSearchString;
    id <RAPAuxiliaryControlsRecording> _currentlyConnectedAuxiliaryControls;
}

@property(copy, nonatomic) id <RAPAuxiliaryControlsRecording> currentlyConnectedAuxiliaryControls; // @synthesize currentlyConnectedAuxiliaryControls=_currentlyConnectedAuxiliaryControls;
@property(copy, nonatomic) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(copy, nonatomic) NSString *mapTileStateLog; // @synthesize mapTileStateLog=_mapTileStateLog;
@property(copy, nonatomic) NSArray *mapVisibleTileSets; // @synthesize mapVisibleTileSets=_mapVisibleTileSets;
@property(copy, nonatomic) NSData *mapSnapshotImageData; // @synthesize mapSnapshotImageData=_mapSnapshotImageData;
@property(copy, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(copy, nonatomic) NSArray *directionsHistory; // @synthesize directionsHistory=_directionsHistory;
@property(copy, nonatomic) NSArray *searchesHistory; // @synthesize searchesHistory=_searchesHistory;
@property(retain, nonatomic) id <RAPPlace> reportedPlace; // @synthesize reportedPlace=_reportedPlace;
@property(retain, nonatomic) id <RAPCurrentDirections> currentDirections; // @synthesize currentDirections=_currentDirections;
@property(nonatomic, getter=isShowingLabels) BOOL showingLabels; // @synthesize showingLabels=_showingLabels;
@property(nonatomic, getter=isShowingImagery) BOOL showingImagery; // @synthesize showingImagery=_showingImagery;
- (void).cxx_destruct;
- (void)setMapPropertiesFromView:(id)arg1 traits:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


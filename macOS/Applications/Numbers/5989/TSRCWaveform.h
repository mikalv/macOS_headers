//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray;

@interface TSRCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSMutableArray *_segments;
    unsigned long long _decodedVersion;
}

+ (void)_mergeBoundarySegmentsInArray:(id)arg1;
+ (id)_mutableSegmentsIntersectingTimeRange:(CDStruct_c3b9c2ee)arg1 intersectionRange:(struct _NSRange *)arg2 withSegments:(id)arg3;
+ (id)_mutableSegmentsByClippingToTimeRange:(CDStruct_c3b9c2ee)arg1 withSegments:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (struct _NSRange)rangeOfSegmentsIntersectingTimeRange:(CDStruct_c3b9c2ee)arg1 withSegments:(id)arg2;
+ (id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2;
+ (id)waveformURLForAVURL:(id)arg1;
+ (void)initialize;
@property(retain) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)segmentsByClippingToTimeRange:(CDStruct_c3b9c2ee)arg1;
- (BOOL)saveContentsToURL:(id)arg1;
@property(readonly, nonatomic) unsigned long long averagePowerLevelsRate;
@property(readonly) unsigned long long segmentCount;
@property(readonly) NSArray *segmentsCopy;
- (BOOL)isWaveformDataEqualToDataInWaveform:(id)arg1;
- (BOOL)hasUniformPowerLevel:(float)arg1;
- (id)initWithSegments:(id)arg1;
- (id)init;

@end


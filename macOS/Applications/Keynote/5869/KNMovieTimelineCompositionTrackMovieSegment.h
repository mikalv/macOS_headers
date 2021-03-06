//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface KNMovieTimelineCompositionTrackMovieSegment : NSObject
{
    NSObject<NSCopying> *_movieIdentifier;
    CDStruct_e83c9415 _timeRange;
    struct CGAffineTransform _videoTransform;
}

@property(readonly, nonatomic) struct CGAffineTransform videoTransform; // @synthesize videoTransform=_videoTransform;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) NSObject<NSCopying> *movieIdentifier; // @synthesize movieIdentifier=_movieIdentifier;
- (void).cxx_destruct;
- (id)initWithMovieIdentifier:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 videoTransform:(struct CGAffineTransform)arg3;

@end


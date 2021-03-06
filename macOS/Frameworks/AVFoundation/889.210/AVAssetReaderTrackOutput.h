//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput
{
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_trimsSampleDurations;
- (id)_asset;
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForMetadataAdaptor;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)mediaType;
@property(nonatomic) BOOL appliesPreferredTrackTransform;
@property(readonly, nonatomic, getter=_isAttachedToMetadataAdaptor) BOOL attachedToMetadataAdaptor;
- (void)_attachToMetadataAdaptor:(id)arg1;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(readonly, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RCRecordingView.h"

@class RCRecordingDescriptionView;

@interface RCPlaybackView : RCRecordingView
{
    BOOL _isRecentlyDeleted;
}

@property(nonatomic) BOOL isRecentlyDeleted; // @synthesize isRecentlyDeleted=_isRecentlyDeleted;
- (void)_handleEdit;
- (struct CGSize)intrinsicContentSize;
- (void)_classSpecificLayout;
- (void)_showRecordingControlOrTrimOverview;
- (void)_alignRecordingControlToRight;
- (void)_alignRecordingControlToCenter;
- (void)_setupWaveformView;
- (double)_cornerRadiusForExpandedCard;
- (void)_classSpecificInit;
- (BOOL)_showsEditingToolbar;
- (void)_showHideViewsForDisplayOptions:(unsigned long long)arg1;
- (void)_syncSubviewIntrinsicHeights;
- (void)_applyFixedOverviewWaveformViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) RCRecordingDescriptionView *descriptionView; // @dynamic descriptionView;
- (void)setIsModal:(BOOL)arg1;

@end


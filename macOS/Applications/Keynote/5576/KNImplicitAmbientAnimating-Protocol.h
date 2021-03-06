//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNAnimatedBuild, KNAnimatedSlideView, KNBuildChunk, KNBuildRenderer, KNPlaybackSession;
@protocol KNAmbientBuildRenderer;

@protocol KNImplicitAmbientAnimating <NSObject>
@property(readonly, nonatomic, getter=isImplicitAmbientAnimationInteractive) BOOL implicitAmbientAnimationInteractive;
@property(readonly, nonatomic) BOOL canAddImplicitAmbientAnimations;
- (KNBuildRenderer<KNAmbientBuildRenderer> *)newImplicitAmbientBuildRendererWithAnimatedBuild:(KNAnimatedBuild *)arg1 buildChunk:(KNBuildChunk *)arg2 session:(KNPlaybackSession *)arg3 animatedSlideView:(KNAnimatedSlideView *)arg4;
@end


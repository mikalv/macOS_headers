//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoAccessoryItemDisplayModeTransitionContext;

@protocol SVVideoAccessoryItemDisplayModeTransitioning <NSObject>
- (void)cancelTransition;
- (void)animateWithContext:(id <SVVideoAccessoryItemDisplayModeTransitionContext>)arg1;
- (void)animateAlongsideTransition:(void (^)(void))arg1 withCompletionBlock:(void (^)(BOOL))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol NULoadingDelegate <NSObject>

@optional
- (void)loadingDidFinishWithError:(NSError *)arg1;
- (void)loadingWillFinishWithError:(NSError *)arg1;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingDidStart;
- (void)loadingWillStart;
@end


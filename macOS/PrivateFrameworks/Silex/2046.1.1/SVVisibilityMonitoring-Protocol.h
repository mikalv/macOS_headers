//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SVVisibilityMonitoring <NSObject>
@property(readonly, nonatomic) __weak id object;
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) BOOL appeared;
@property(readonly, nonatomic) unsigned long long state;
- (void)onDidDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onVisiblePercentageChange:(void (^)(id <SVVisibilityMonitoring>, double))arg1;
- (void)onDidAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
@end


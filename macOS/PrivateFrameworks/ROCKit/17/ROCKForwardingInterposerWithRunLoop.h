//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ROCKit/ROCKForwardingInterposer.h>

@class ROCKRunLoop;

__attribute__((visibility("hidden")))
@interface ROCKForwardingInterposerWithRunLoop : ROCKForwardingInterposer
{
    ROCKRunLoop *_runLoop;
}

@property(retain, nonatomic) ROCKRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)configureRunLoopWithTimeOut:(double)arg1 tracksMainThread:(BOOL)arg2 runLoopMode:(const struct __CFString *)arg3;

@end


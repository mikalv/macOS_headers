//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class CATOperation, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CATObserverManager : NSObject <CATOperationObserver>
{
    NSMutableSet *mObservers;
    int mState;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_source> *mProgressSource;
    CATOperation *mOperation;
    CATOperation *mStrongOperation;
    BOOL mIsObserving;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)operationDidFinish:(id)arg1;
- (void)notifyObserversOperationDidProgress:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


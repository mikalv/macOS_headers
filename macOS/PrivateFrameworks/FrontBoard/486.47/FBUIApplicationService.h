//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSerialQueue;
@protocol FBUIApplicationServiceDelegate;

@interface FBUIApplicationService : NSObject
{
    FBSSerialQueue *_queue;
    id <FBUIApplicationServiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <FBUIApplicationServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleSuspendApplicationProcess:(id)arg1;
- (void)handleDeleteAllSnapshotsForApplication:(id)arg1;
- (void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(CDUnknownBlockType)arg2;
- (void)handleApplication:(id)arg1 setBadgeValue:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


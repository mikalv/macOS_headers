//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLCloudKitOperationCounter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLCloudKitOperationsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tasks;
    CPLCloudKitOperationCounter *_operationCounter;
}

- (void).cxx_destruct;
- (id)statusDictionary;
- (id)status;
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskHasBeenCancelled:(id)arg1;
- (void)operationHasBeenCancelled:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 updateContextWithBlock:(CDUnknownBlockType)arg2;
- (void)operation:(id)arg1 updateProgress:(double)arg2;
- (void)operationDidProgressOneBatch:(id)arg1;
- (id)_contextForOperation:(id)arg1;
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3 bundleIdentifiers:(id)arg4;
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3;
- (void)taskWillStart:(id)arg1;
- (void)_emitLogForCurrentTasks;
- (id)_pendingTaskStatus;
- (id)init;

@end


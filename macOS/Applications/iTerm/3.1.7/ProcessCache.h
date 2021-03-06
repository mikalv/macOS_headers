//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock;

@interface ProcessCache : NSObject
{
    NSDictionary *pidInfoCache_;
    NSLock *_cacheLock;
    BOOL newOutput_;
    NSLock *_lock;
}

+ (void)augmentClosure:(id)arg1 withTree:(id)arg2 atNode:(id)arg3 skip:(int)arg4;
+ (int)ppidForPid:(int)arg1;
+ (id)allPids;
+ (id)sharedInstance;
+ (void)initialize;
- (id)jobNameWithPid:(int)arg1;
- (void)_run;
- (void)notifyNewOutput;
- (BOOL)testAndClearNewOutput;
- (void)_update;
- (id)pidToForegroundJobName;
- (id)childrenOfPid:(int)arg1 levelsToSkip:(int)arg2;
- (id)dictionaryOfTaskInfoForPid:(int)arg1;
- (id)getNameOfPid:(int)arg1 isForeground:(char *)arg2;
- (void)dealloc;
- (id)init;

@end


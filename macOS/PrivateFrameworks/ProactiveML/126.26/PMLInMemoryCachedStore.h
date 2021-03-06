//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProactiveML/PMLTrainingStore.h>

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore
{
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)_registerUnlockHandler;
- (void)_openDbIfUnlocked;
- (void)storeLogEntryForPlan:(struct NSString *)arg1 model:(id)arg2 serverIteration:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 ignoreIfSingular:(BOOL)arg7 block:(CDUnknownBlockType)arg8;
- (id)initWithSessionBatch:(id)arg1;

@end


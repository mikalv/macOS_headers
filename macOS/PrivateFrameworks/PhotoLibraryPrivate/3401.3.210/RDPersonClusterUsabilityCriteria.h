//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RDDatabase;

@interface RDPersonClusterUsabilityCriteria : NSObject
{
    RDDatabase *_database;
}

- (void).cxx_destruct;
- (long long)calculateTargetFaceCountFromDataSource:(id)arg1 withMaxUnverifiedClusters:(long long)arg2;
- (void)updatePersistentTargetFaceCount;
- (void)setPersistentTargetFaceCount:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long persistentTargetFaceCount;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end


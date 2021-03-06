//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject
{
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)cache;
- (void)setNotificationManager:(id)arg1;
- (id)notificationManager;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setManagedObjectContext:(id)arg1;
- (id)managedObjectContext;
- (CDStruct_4c969caf)auditToken;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (id)description;
- (id)initWithConnectionInfo:(id)arg1;

@end


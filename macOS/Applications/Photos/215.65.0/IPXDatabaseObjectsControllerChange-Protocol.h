//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsControllerChange-Protocol.h"

@class NSSet;
@protocol IPXLockedDatabaseObjectsController, NSFastEnumeration;

@protocol IPXDatabaseObjectsControllerChange <IPXObjectsControllerChange>

@optional
- (void)databaseObjectsControllerDatabaseClosing:(id <IPXLockedDatabaseObjectsController>)arg1;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id <NSFastEnumeration>)arg3 inChild:(id <IPXLockedDatabaseObjectsController>)arg4;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 metadataChanged:(NSSet *)arg2 forObjects:(id <NSFastEnumeration>)arg3 inChild:(id <IPXLockedDatabaseObjectsController>)arg4;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 propertiesChanged:(NSSet *)arg2 inChild:(id <IPXLockedDatabaseObjectsController>)arg3;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 objectsCollectionChangedInChild:(id <IPXLockedDatabaseObjectsController>)arg2;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id <NSFastEnumeration>)arg3;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 metadataChanged:(NSSet *)arg2 forObjects:(id <NSFastEnumeration>)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id <IPXLockedDatabaseObjectsController>)arg1;
- (void)objectsController:(id <IPXLockedDatabaseObjectsController>)arg1 propertiesChanged:(NSSet *)arg2;
@end


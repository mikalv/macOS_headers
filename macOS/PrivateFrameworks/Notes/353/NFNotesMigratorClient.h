//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFNotesMigratorDelegate;

@interface NFNotesMigratorClient : NSObject
{
    id <NFNotesMigratorDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property __weak id <NFNotesMigratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startService;
- (BOOL)sync_hasLocalNotes;
- (BOOL)sync_shouldMigrateLocalNotes;
- (void)async_shouldMigrateLocalNotes;
- (void)migrateNotesToiCloudIfNecessary:(BOOL)arg1;
- (id)_newConnection;
- (void)_setAuditSessionOnMessage:(id)arg1;
- (void)_logGenericError:(id)arg1;
- (void)_handleMigratorFailure:(id)arg1;
- (void)_handleXPCErrorWithEvent:(id)arg1;
- (void)dealloc;

@end


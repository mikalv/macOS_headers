//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFileManagerDelegate-Protocol.h"
#import "TSPSupportDirectoryDelegate-Protocol.h"

@class NSString, TSABaseApplicationDelegate;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TSASyncManager : NSObject <NSFileManagerDelegate, TSPSupportDirectoryDelegate>
{
    NSObject<OS_dispatch_group> *_setupGroup;
    BOOL _didBeginSetup;
    NSObject<OS_dispatch_queue> *_concurrentAccessQueue;
    NSString *_concurrentAccessQueue_syncedDocumentsDirectory;
    TSABaseApplicationDelegate *_appDelegate;
}

+ (void)dormantStringsForLocalizationToPickup;
+ (id)sharedManager;
- (void).cxx_destruct;
- (BOOL)isQuotaErrorPreventingUploadForDocumentURL:(id)arg1;
- (id)uniqueSyncedFilenameForProposedFilename:(id)arg1 folderName:(id)arg2;
- (BOOL)_validateInfoNameMaxLength:(id)arg1;
- (void)openShareURLInBrowserForDocumentURL:(id)arg1 logContext:(id)arg2;
- (void)openShareURLInBrowserForDocumentURL:(id)arg1 logContext:(id)arg2 shareURLErrorHandler:(CDUnknownBlockType)arg3;
- (BOOL)isSafeSaveTempFile:(id)arg1;
- (void)didEndSetup;
- (void)didBeginSetup;
- (void)waitForSetup;
- (void)notifyAfterSetupUsingCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)syncSetup;
@property(readonly, nonatomic) BOOL syncEnabled;
@property(readonly, nonatomic) BOOL iCloudConfigured;
@property(copy) NSString *syncedDocumentsDirectory;
- (BOOL)isInUbiquitousContainerAtURL:(id)arg1;
- (void)resetSyncedDocumentsDirectory;
- (void)showICloudDebugProfileNotInstalledAlertIfNeeded;
- (BOOL)_is_internal_install;
- (void)_iCloudAccountAvailabilityChanged:(id)arg1;
- (void)iCloudAccountAvailabilityChanged;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


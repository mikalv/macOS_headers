//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSProgressIndicator, RKRepairLibraryPermissions, RKRepairLibraryPermissionsProgressAdaptor;
@protocol IPXLibraryInstantiatorUIDelegate;

@interface IPXLibraryRepairProgressController : NSWindowController
{
    BOOL _operationEnded;
    NSProgressIndicator *_progressIndicator;
    RKRepairLibraryPermissions *_repairer;
    RKRepairLibraryPermissionsProgressAdaptor *_progressAdaptor;
    id <IPXLibraryInstantiatorUIDelegate> _uiDelegate;
}

+ (BOOL)userForcedRepair:(id)arg1;
+ (id)newController;
@property __weak id <IPXLibraryInstantiatorUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property BOOL operationEnded; // @synthesize operationEnded=_operationEnded;
@property(retain) RKRepairLibraryPermissionsProgressAdaptor *progressAdaptor; // @synthesize progressAdaptor=_progressAdaptor;
@property(retain) RKRepairLibraryPermissions *repairer; // @synthesize repairer=_repairer;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopShowProgress;
- (void)startShowProgress:(id)arg1;
- (void)startRepair:(CDUnknownBlockType)arg1;
- (void)setupRepair:(id)arg1 progress:(id)arg2;
- (void)repairLibraryPermission:(id)arg1 userForced:(BOOL)arg2 window:(id)arg3 uiDelegate:(id)arg4 allowCancel:(BOOL)arg5 progress:(id)arg6 messageTracer:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)checkAndRepairLibraryPermission:(id)arg1 window:(id)arg2 allowCancel:(BOOL)arg3 progress:(id)arg4 messageTracer:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)windowDidLoad;

@end


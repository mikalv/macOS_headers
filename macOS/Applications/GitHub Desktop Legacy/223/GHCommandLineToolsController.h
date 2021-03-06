//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACCommand;
@protocol OS_xpc_object;

@interface GHCommandLineToolsController : NSObject
{
    BOOL _closing;
    RACCommand *_installCommandLineToolsCommand;
    NSObject<OS_xpc_object> *_activeConnection;
}

+ (id)installationFailedErrorWithToolName:(id)arg1 localizedDescription:(id)arg2;
@property BOOL closing; // @synthesize closing=_closing;
@property(retain) NSObject<OS_xpc_object> *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(readonly, nonatomic) RACCommand *installCommandLineToolsCommand; // @synthesize installCommandLineToolsCommand=_installCommandLineToolsCommand;
- (void).cxx_destruct;
- (id)uninstallOldSymlinks;
- (id)sendXPCMessage:(id)arg1;
- (id)oldInstalledSymlinks;
- (id)installGitLFS;
- (id)installLauncher;
- (id)installCommandLineTools;
- (id)executeWithConnection:(CDUnknownBlockType)arg1;
- (id)authorizeAndBlessInstaller;
- (id)reinstallPreDesktopTools;
- (id)checkForPreDesktopTools;
- (id)checkIfGitWasInstalled;
- (id)init;

@end


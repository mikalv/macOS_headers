//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TopoNode.h"

#import "NSCoding-Protocol.h"
#import "SettingsProtocol-Protocol.h"

@class NSMutableSet, NSString;
@protocol AssistantCallbackUIDelegate, SettingsFunctionDelegate, SettingsValueDelegate;

@interface TopoNode_SettingsProtocol : TopoNode <NSCoding, SettingsProtocol>
{
    struct SettingsContext *_settingsContext;
    NSMutableSet *_settingsDelegates;
}

@property(readonly, nonatomic) NSMutableSet *settingsDelegates; // @synthesize settingsDelegates=_settingsDelegates;
- (int)getValue:(id *)arg1 forSettingKey:(id)arg2;
- (BOOL)hasEditMode;
- (int)settingsLevel;
- (BOOL)hasSettingsLevel:(int)arg1;
- (int)setSettingsLevel:(int)arg1;
- (int)refreshSettings;
@property(nonatomic) id <SettingsValueDelegate> settingsValueDelegate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)initTopoNode_SettingsProtocolCommon;
- (void)handleSettingsUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL rememberBasePassword;
@property(nonatomic) id <SettingsFunctionDelegate> settingsFunctionDelegate;
@property(copy, nonatomic) NSString *settingsKeyToEdit;
@property(readonly) Class superclass;
@property(nonatomic) id <AssistantCallbackUIDelegate> uiDelegate;

@end


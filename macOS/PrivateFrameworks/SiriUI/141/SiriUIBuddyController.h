//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSDictionary, NSString, SiriUIBuddyChooseLanguageController, SiriUIBuddyEnableSiriController, SiriUIBuddyVoiceTriggerController;
@protocol MBSecondPartyHost, SiriUIBuddyDelegate;

@interface SiriUIBuddyController : NSViewController
{
    int _state;
    NSViewController *_currentPanelController;
    SiriUIBuddyEnableSiriController *_enableSiriController;
    SiriUIBuddyChooseLanguageController *_chooseLanguageController;
    SiriUIBuddyVoiceTriggerController *_voiceTriggerController;
    BOOL _enableSiri;
    NSString *_siriLanguageCode;
    id <MBSecondPartyHost> _host;
    id <SiriUIBuddyDelegate> _delegate;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property __weak id <SiriUIBuddyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <MBSecondPartyHost> host; // @synthesize host=_host;
@property(retain) NSString *siriLanguageCode; // @synthesize siriLanguageCode=_siriLanguageCode;
@property BOOL enableSiri; // @synthesize enableSiri=_enableSiri;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setState:(int)arg1;
- (void)setCurrentPanelController:(id)arg1;
- (id)voiceTriggerController;
- (id)chooseLanguageController;
- (id)enableSiriController;
- (void)loadView;
- (id)initWithHost:(id)arg1 userInfo:(id)arg2;

@end


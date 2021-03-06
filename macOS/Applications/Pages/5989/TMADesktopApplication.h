//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "NSSpeechSynthesizerDelegate-Protocol.h"
#import "TMAScriptCommandExecutionResolving-Protocol.h"
#import "TSKApplicationTerminating-Protocol.h"

@class NSArray, NSSpeechSynthesizer, NSString;

@interface TMADesktopApplication : NSApplication <TMAScriptCommandExecutionResolving, NSSpeechSynthesizerDelegate, TSKApplicationTerminating>
{
    NSSpeechSynthesizer *_speechSynthesizer;
    BOOL _isTerminating;
}

+ (id)sharedApplication;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)openFeedbackURL:(id)arg1;
- (id)feedbackURL;
@property(readonly, nonatomic) BOOL shouldHideImportFromDevicesMenuItem;
@property(readonly, nonatomic) BOOL isTerminating;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)stopSpeaking:(id)arg1;
- (BOOL)isSpeaking;
- (void)speakString:(id)arg1;
- (void)orderFrontStandardAboutPanelWithOptions:(id)arg1;
- (void)terminate:(id)arg1;
- (id)newDocumentFromScriptingWithProperties:(id)arg1;
- (id)templateInfoForTemplateDescription:(id)arg1 properties:(id)arg2;
- (id)templateDescriptionKey;
@property(readonly, nonatomic) NSArray *orderedTemplates;
- (BOOL)canExecuteCommand:(id)arg1;
- (void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3;
- (void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


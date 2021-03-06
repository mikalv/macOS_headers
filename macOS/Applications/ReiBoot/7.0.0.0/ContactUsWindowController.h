//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CSDialogWindow, ContacUSToolTIpWindowController, NSButton, NSTextField, NSTextView;

@interface ContactUsWindowController : NSWindowController <NSTextFieldDelegate, NSTextViewDelegate, NSWindowDelegate>
{
    ContacUSToolTIpWindowController *_tipWindowController;
    CSDialogWindow *_dialogWindow;
    NSTextField *_txEditEmail;
    NSTextView *_txContent;
    NSTextField *_txEmailAvalible;
    NSButton *_btnLogFile;
    BOOL _submitEnable;
}

- (void)setSubmitEnable:(BOOL)arg1;
- (BOOL)submitEnable;
- (void)setBtnLogFile:(id)arg1;
- (id)btnLogFile;
- (void)setTxEmailAvalible:(id)arg1;
- (id)txEmailAvalible;
- (void)setTxContent:(id)arg1;
- (id)txContent;
- (void)setTxEditEmail:(id)arg1;
- (id)txEditEmail;
- (void)windowWillClose:(id)arg1;
- (void)onCloseBtn:(id)arg1;
- (void)submitResult:(id)arg1;
- (void)popWaitDialog;
- (void)performMainThread:(id)arg1;
- (void)performToMainOnSend:(id)arg1;
- (void)onSubmitNowBtn:(id)arg1;
- (int)sendFileWithPath:(id)arg1 Type:(const char *)arg2 SendId:(const char **)arg3;
- (id)listForDirectory:(id)arg1;
- (BOOL)isEmailAddress:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)dealloc;

@end


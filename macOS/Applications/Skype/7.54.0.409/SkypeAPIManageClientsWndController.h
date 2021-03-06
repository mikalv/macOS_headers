//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSAttributedString, NSButton, NSMatrix, NSString, NSTableView, NSWindow, SkypeAPIManageClientsCell;

@interface SkypeAPIManageClientsWndController : NSWindowController
{
    NSTableView *_tableView;
    NSButton *_changeBtn;
    NSButton *_removeBtn;
    NSButton *_doneBtn;
    NSWindow *_changePermissionWnd;
    NSMatrix *_changePermissionMatrix;
    NSAttributedString *_attributedStringAPIAllow;
    NSAttributedString *_attributedStringAPIAskAgain;
    NSAttributedString *_attributedStringAPIDontAllow;
    NSAttributedString *_attributedStringAPIAllowSelected;
    NSAttributedString *_attributedStringAPIAskAgainSelected;
    NSAttributedString *_attributedStringAPIDontAllowSelected;
    SkypeAPIManageClientsCell *_clientCell;
}

@property(retain) SkypeAPIManageClientsCell *clientCell; // @synthesize clientCell=_clientCell;
@property(retain) NSAttributedString *attributedStringAPIDontAllowSelected; // @synthesize attributedStringAPIDontAllowSelected=_attributedStringAPIDontAllowSelected;
@property(retain) NSAttributedString *attributedStringAPIAskAgainSelected; // @synthesize attributedStringAPIAskAgainSelected=_attributedStringAPIAskAgainSelected;
@property(retain) NSAttributedString *attributedStringAPIAllowSelected; // @synthesize attributedStringAPIAllowSelected=_attributedStringAPIAllowSelected;
@property(retain) NSAttributedString *attributedStringAPIDontAllow; // @synthesize attributedStringAPIDontAllow=_attributedStringAPIDontAllow;
@property(retain) NSAttributedString *attributedStringAPIAskAgain; // @synthesize attributedStringAPIAskAgain=_attributedStringAPIAskAgain;
@property(retain) NSAttributedString *attributedStringAPIAllow; // @synthesize attributedStringAPIAllow=_attributedStringAPIAllow;
@property __weak NSMatrix *changePermissionMatrix; // @synthesize changePermissionMatrix=_changePermissionMatrix;
@property __weak NSWindow *changePermissionWnd; // @synthesize changePermissionWnd=_changePermissionWnd;
@property __weak NSButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property __weak NSButton *removeBtn; // @synthesize removeBtn=_removeBtn;
@property __weak NSButton *changeBtn; // @synthesize changeBtn=_changeBtn;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshTable;
- (void)windowDidResignMain:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
@property(readonly, nonatomic) NSString *selectedApplicationName;
@property(readonly, nonatomic) NSArray *arrayForTable;
- (void)windowWillClose:(id)arg1;
- (void)onChangePermissionWndDoneBtn:(id)arg1;
- (void)onDoneBtn:(id)arg1;
- (void)onRemoveBtn:(id)arg1;
- (void)onChangeBtn:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


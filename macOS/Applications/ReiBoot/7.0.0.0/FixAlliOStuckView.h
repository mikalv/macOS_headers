//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSView.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class CSTenorshareTextField, NSButton, NSLayerButton, NSMutableArray, NSScrollView, NSTableView, NSTextField;

@interface FixAlliOStuckView : NSView <NSTableViewDelegate, NSTableViewDataSource>
{
    NSLayerButton *_btniTunesBugs;
    NSLayerButton *_btnScreenStuck;
    NSLayerButton *_btnModeStuck;
    NSTableView *_tableView;
    NSButton *_btnUpdateNow;
    NSTextField *_textFiledContactus;
    NSScrollView *_scrollView;
    NSMutableArray *_arrayScreenStuck;
    NSMutableArray *_arrayModeStuck;
    NSMutableArray *_arrayiTunesBugs;
    NSMutableArray *_curentArrays;
    NSMutableArray *_localScreenStuck;
    NSMutableArray *_localModeStuck;
    NSMutableArray *_localiTunesBugs;
    id _goRegairTarget;
    SEL _goToRegpairAction;
    CSTenorshareTextField *_upGradeProLink;
}

- (void)setUpGradeProLink:(id)arg1;
- (id)upGradeProLink;
- (void)dealloc;
- (void)setGoToRepairkAction:(SEL)arg1 withTarget:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(int)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(int)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (id)buildTranstion;
- (void)onUpdateNowBtn:(id)arg1;
- (void)onBtniTunesBugs:(id)arg1;
- (void)onBtnModeStuck:(id)arg1;
- (void)onBtnScreenStuck:(id)arg1;
- (void)onNotifyThemeColorChange:(id)arg1;
- (void)drawRect:(struct _NSRect)arg1;
- (void)perFormContactUs;
- (void)setHiddenLinkText:(BOOL)arg1;
- (void)onClickContactUs;
- (void)initViewText;
- (void)clickLinkToProVersion:(id)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"
#import "TSTTableControlCellViewController-Protocol.h"

@class NSMenu, NSString, TSTTableRep;

@interface TSTMacTablePopupMenuViewController : NSObject <TSTTableControlCellViewController, NSMenuDelegate>
{
    BOOL _startWithFirstItem;
    int _interactionType;
    TSTTableRep *_tableRep;
    NSMenu *_menu;
    struct TSTCellUID _editingCellUID;
}

@property(nonatomic) int interactionType; // @synthesize interactionType=_interactionType;
@property(nonatomic) BOOL startWithFirstItem; // @synthesize startWithFirstItem=_startWithFirstItem;
@property(nonatomic) struct TSTCellUID *editingCellUID; // @synthesize editingCellUID=_editingCellUID;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) TSTTableRep *tableRep; // @synthesize tableRep=_tableRep;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)canvasDidZoom;
- (void)canvasWillZoom;
- (void)canvasDidEndScrolling;
- (void)canvasWillBeginScrolling;
- (void)dismiss;
- (void)updateValue;
- (void)updatePosition;
- (void)present;
- (void)p_menuItemSelected:(id)arg1;
- (id)initWithTableRep:(id)arg1 cellID:(struct TSUCellCoord)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


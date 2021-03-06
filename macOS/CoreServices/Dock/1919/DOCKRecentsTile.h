//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Tile.h"

#import "DOCKStackActionHandling-Protocol.h"
#import "DOCKStackCollapsedDataSource-Protocol.h"
#import "DOCKStackExpandedDataSource-Protocol.h"

@class DOCKStack, NSArray, NSMutableArray, NSString;

@interface DOCKRecentsTile : Tile <DOCKStackActionHandling, DOCKStackExpandedDataSource, DOCKStackCollapsedDataSource>
{
    DOCKStack *_stack;
    id _list;
    NSMutableArray *_items;
    long long _type;
    NSArray *_sortedTypeAheadArray;
    unsigned char _viewAs;
    int _preferredItemSize;
    unsigned int _ignoreNextDoAction:1;
}

@property(nonatomic) int preferredItemSize; // @synthesize preferredItemSize=_preferredItemSize;
@property(nonatomic) unsigned char viewAs; // @synthesize viewAs=_viewAs;
- (id)stack;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *messageTracerStackType;
- (id)expandedStackValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)expandedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3 maximumViewableItems:(unsigned long long)arg4;
- (id)collapsedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfExpandedStackItems;
- (unsigned long long)numberOfCollapsedStackItems;
- (void)showStackAsMenu:(BOOL)arg1;
- (void)endStackTypeAhead;
- (unsigned long long)indexForStackTypeAhead:(id)arg1;
- (void)beginStackTypeAhead:(id)arg1;
- (BOOL)performStackActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (BOOL)_hasRecents;
- (void)_recentsChanged:(id)arg1;
- (BOOL)showMenu:(BOOL)arg1 options:(unsigned long long)arg2;
- (void)spring:(unsigned int)arg1;
- (_Bool)allowsForcedSpringing;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (void)doCommand:(unsigned int)arg1;
- (id)copyInstallDictionary:(int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(unsigned long long)arg2;
- (id)copyTilePlist;
- (id)typeString;
- (void)collapseStack;
- (void)dealloc;
- (id)initWithPlist:(id)arg1;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


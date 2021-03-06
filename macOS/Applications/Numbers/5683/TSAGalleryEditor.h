//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableEditor.h"

#import "TSDMacTouchBarAwareEditor-Protocol.h"
#import "TSDMediaReplacing-Protocol.h"

@class NSOrderedSet, NSSet, NSString, TSAGalleryInfo, TSAGalleryItem;
@protocol NSTouchBarProvider;

@interface TSAGalleryEditor : TSDDrawableEditor <TSDMediaReplacing, TSDMacTouchBarAwareEditor>
{
    id <NSTouchBarProvider> _touchBarProvider;
}

+ (id)p_displayedItemInRemainingItems:(id)arg1 afterRemovingDisplayedItem:(id)arg2 fromItems:(id)arg3;
+ (id)selectionBehaviorForInsertingItems:(id)arg1 intoGalleryInfo:(id)arg2 atIndex:(unsigned long long)arg3 selectionModelTranslator:(id)arg4;
+ (Class)touchBarProviderClass;
@property(retain, nonatomic) id <NSTouchBarProvider> touchBarProvider; // @synthesize touchBarProvider=_touchBarProvider;
- (void).cxx_destruct;
- (BOOL)p_canEditMask;
@property(readonly, nonatomic) TSAGalleryItem *selectedOrDisplayedGalleryItem;
@property(readonly, nonatomic) NSOrderedSet *selectedOrDisplayedGalleryItems;
- (void)p_addItemsFromImporter:(id)arg1 toGalleryInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)replaceSelectedMediaWithFilesAtURLs:(id)arg1 allowedTypes:(id)arg2;
- (void)replaceSelectedMediaWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMediaReplacer:(id)arg1;
- (void)hideMaskControl:(id)arg1;
- (void)insertNewline:(id)arg1;
- (BOOL)p_canHideMaskControl;
- (void)maskWithSelection:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)selectionBehaviorForRemovingItems:(id)arg1;
- (void)removeItems:(id)arg1;
- (id)selectionBehaviorForMovingItems:(id)arg1 toIndexes:(id)arg2;
- (void)moveItems:(id)arg1 toIndexes:(id)arg2;
- (id)selectionBehaviorForInsertingItems:(id)arg1 intoGalleryInfo:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)insertItems:(id)arg1 intoGalleryInfo:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addImageURLs:(id)arg1 toGallery:(id)arg2 allowedTypes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCaptionMode:(long long)arg1;
- (id)newTextEditorForCaptionStorage:(id)arg1;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
@property(readonly, nonatomic) NSSet *galleryInfos;
@property(readonly, nonatomic) TSAGalleryInfo *galleryInfo;
- (id)tma_formatInspectorPaneIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


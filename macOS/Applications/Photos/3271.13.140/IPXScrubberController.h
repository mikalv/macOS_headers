//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXScrubberViewControllerDelegate-Protocol.h"
#import "IPXSelectionTileMediaDelegate-Protocol.h"
#import "PXVideoScrubberControllerDelegate-Protocol.h"

@class IPXSectionsCollection, IPXTilingControllerDataSource, NSMutableSet, NSString, PXVideoScrubberController, RDVersion;
@protocol IPXScrubberControllerDelegate;

@interface IPXScrubberController : NSObject <IPXScrubberViewControllerDelegate, IPXSelectionTileMediaDelegate, PXVideoScrubberControllerDelegate>
{
    Class _datasourceClass;
    NSMutableSet *_viewControllers;
    IPXSectionsCollection *_pendingSectionsCollection;
    RDVersion *_pendingNewSelection;
    BOOL _isSelecting;
    struct PFMainThreadDirectMessagingMulticaster *_changeMulticaster;
    struct {
        char respondsToWantsFocus;
        char respondsToDidSelect;
        char respondsToDidClick;
        char respondsToWillBeginScrolling;
        char respondsToDidScroll;
        char respondsToWillEndScrolling;
        char respondsToDidEndScrolling;
        char respondsToInitialSelectionDidComplete;
        char respondsToStartMedia;
        char respondsToStopMedia;
    } _delegateFlags;
    IPXTilingControllerDataSource *_dataSource;
    id _previousItem;
    id _nextItem;
    id _selectedItem;
    id <IPXScrubberControllerDelegate> _delegate;
    PXVideoScrubberController *_videoScrubberController;
    long long _videoScrubberItemIndex;
}

+ (double)_convertOffset:(double)arg1 fromSVC:(id)arg2 toSVC:(id)arg3;
@property(readonly, nonatomic) long long videoScrubberItemIndex; // @synthesize videoScrubberItemIndex=_videoScrubberItemIndex;
@property(readonly, nonatomic) PXVideoScrubberController *videoScrubberController; // @synthesize videoScrubberController=_videoScrubberController;
@property(nonatomic) __weak id <IPXScrubberControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setSelectedItem:) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(readonly, nonatomic) IPXTilingControllerDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)selectionTileDidStopMedia;
- (void)selectionTileDidStartMedia;
- (void)scrubberViewControllerInitialSelectionDidComplete:(id)arg1;
- (void)scrubberViewControllerDidEndScrolling:(id)arg1;
- (void)scrubberViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetId:(id)arg3;
- (void)scrubberViewControllerDidScroll:(id)arg1 toItem:(id)arg2 withProgress:(double)arg3;
- (void)scrubberViewControllerDidClick:(id)arg1 itemId:(id)arg2;
- (void)scrubberViewControllerDidSelect:(id)arg1 itemIdentifier:(id)arg2;
- (void)scrubberViewControllerScrollStateDidChange:(id)arg1;
- (void)scrubberViewControllerWillBeginScrolling:(id)arg1;
- (void)scrubberViewControllerTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)scrubberViewControllerTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrubberViewControllerWantsFocus:(id)arg1;
- (void)scrubberViewControllerWantsInvalidation:(id)arg1;
- (void)resetTilesWithObjects:(id)arg1;
- (void)resetTilesWithoutClearingCache;
- (void)resetTiles;
- (id)_keyForItem:(id)arg1;
- (BOOL)refreshSectionsCollection:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)identifierForVersion:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSectionsCollection:(id)arg1 animate:(BOOL)arg2 newSelection:(id)arg3;
- (void)setSectionsCollection:(id)arg1 animate:(BOOL)arg2;
- (void)setSectionsCollection:(id)arg1;
- (void)_updateSectionsCollectionIfNeeded;
- (id)itemIdentifierForIndex:(long long)arg1;
- (unsigned long long)indexForItemIdentifier:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)identifierForItem:(id)arg1;
- (id)sectionsCollection;
@property(readonly, nonatomic) unsigned long long numberOfLeafCollectionObjects;
- (id)_itemOnRight;
- (id)_itemOnLeft;
@property(readonly, nonatomic) id nextItem; // @synthesize nextItem=_nextItem;
@property(readonly, nonatomic) id previousItem; // @synthesize previousItem=_previousItem;
- (void)_selectItem:(id)arg1 animate:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)silentSelectItem:(id)arg1 animate:(BOOL)arg2;
- (void)selectItem:(id)arg1 animate:(BOOL)arg2;
- (void)setDataSource:(id)arg1 withSelectedItem:(id)arg2;
- (BOOL)_isBusy;
- (void)setVideoScrubberController:(id)arg1 forItemIndex:(long long)arg2;
- (void)removeScrubberViewController:(id)arg1;
- (void)addScrubberViewController:(id)arg1;
- (id)initWithDatasourceClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


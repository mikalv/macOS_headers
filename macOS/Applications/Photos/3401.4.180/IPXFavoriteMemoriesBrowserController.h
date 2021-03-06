//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetsViewControllerCustomLayoutDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"

@class IPXAssetsViewController, IPXAssetsViewControllerColumnCountSliderController, IPXFavoriteMemoriesBrowserLayout, IPXFavoriteMemoriesObjectsController, IPXLibrary, IPXPlaceholderViewHelper, NSArray, NSString, PXMemoriesSpec;

@interface IPXFavoriteMemoriesBrowserController : IPXBrowserController <IPXObjectsControllerChangeReceiver, IPXAssetsViewControllerCustomLayoutDelegate, IPXSelectionProvider, PFResourceAccessClient>
{
    IPXAssetsViewController *_assetsViewController;
    IPXLibrary *_library;
    IPXFavoriteMemoriesObjectsController *_favoriteMemoriesObjectsController;
    IPXFavoriteMemoriesBrowserLayout *_collectionsLayout;
    IPXAssetsViewControllerColumnCountSliderController *_columnCountSliderController;
    PXMemoriesSpec *_spec;
    NSString *_firstVisibleMemoryUUID;
    NSArray *_selectedMemoriesUUIDs;
    IPXPlaceholderViewHelper *_placeholderViewHelper;
}

@property(retain, nonatomic) IPXPlaceholderViewHelper *placeholderViewHelper; // @synthesize placeholderViewHelper=_placeholderViewHelper;
@property(retain, nonatomic) NSArray *selectedMemoriesUUIDs; // @synthesize selectedMemoriesUUIDs=_selectedMemoriesUUIDs;
@property(retain, nonatomic) NSString *firstVisibleMemoryUUID; // @synthesize firstVisibleMemoryUUID=_firstVisibleMemoryUUID;
@property(retain, nonatomic) PXMemoriesSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) IPXAssetsViewControllerColumnCountSliderController *columnCountSliderController; // @synthesize columnCountSliderController=_columnCountSliderController;
@property(retain, nonatomic) IPXFavoriteMemoriesBrowserLayout *collectionsLayout; // @synthesize collectionsLayout=_collectionsLayout;
@property(retain, nonatomic) IPXFavoriteMemoriesObjectsController *favoriteMemoriesObjectsController; // @synthesize favoriteMemoriesObjectsController=_favoriteMemoriesObjectsController;
@property(retain, nonatomic) IPXLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) IPXAssetsViewController *assetsViewController; // @synthesize assetsViewController=_assetsViewController;
- (void).cxx_destruct;
- (id)placeholderMessage;
- (id)placeholderTitle;
- (BOOL)isPlaceholderVisible;
- (id)selectionProviderCurrentSelection;
- (void)performActionForSelectingCurrentTabBarItemSegment;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationDestination;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (id)navigationIdentifier;
- (unsigned long long)assetsViewController:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (void)assetsViewController:(id)arg1 createdDraggingSession:(id)arg2 forItemsAtIndexPaths:(id)arg3;
- (id)assetsViewController:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)assetsViewControllerItemsChanged:(id)arg1;
- (void)assetsViewController:(id)arg1 didUpdateSectionsCollection:(id)arg2;
- (void)assetsViewController:(id)arg1 changedValueOfLayoutColumnCountScalar:(id)arg2;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (void)assetsViewController:(id)arg1 didAssignMediaSection:(id)arg2 toSupplementaryView:(id)arg3 atIndexPath:(id)arg4;
- (BOOL)assetsViewController:(id)arg1 shouldShowFooterAtIndexPath:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)layoutColumnCountScalarForAssetsViewController:(id)arg1;
- (id)assetsViewController:(id)arg1 cellReuseIdentifierAtIndexPath:(id)arg2;
- (id)supplementaryViewClassDefinitionsForCustomLayoutAssetsViewController:(id)arg1;
- (id)itemCellClassDefinitionsForCustomLayoutAssetsViewController:(id)arg1;
- (id)layoutForAssetsViewController:(id)arg1;
- (void)assetsViewController:(id)arg1 didAssignMediaItem:(id)arg2 toCell:(id)arg3 atIndexPath:(id)arg4;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)scrollToInitialPositionAnimated:(BOOL)arg1;
- (void)copy:(id)arg1;
- (void)a_trashItem:(id)arg1;
- (void)a_favoriteItem:(id)arg1;
- (void)a_startSlideshow:(id)arg1;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFirstResponder;
- (void)loadView;
- (void)didBecomeInactive;
- (void)willBecomeActive;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;
- (id)_localizedSelectionSummaryWithCount:(unsigned long long)arg1;
- (void)_scrollToMemory:(id)arg1 animated:(BOOL)arg2;
- (id)_sortedVisibleMediaItemIndexPaths;
- (void)_updateSelectedMemories;
- (void)_rejectSelectedMemories;
- (void)_promptToRejectMemories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showMemoryAtIndexPath:(id)arg1;
- (id)_memoryAtIndexPath:(id)arg1;
- (void)_restoreSelectedMemoriesIfNecessary;
- (BOOL)_hasSelectedMemories;
- (void)_updateItemCount;
- (void)_updateColumnCountSliderValue;
- (void)_setupNavigationItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetsViewControllerStyleBasedDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "UXNavigationRoot-Protocol.h"

@class IPXAssetsViewController, IPXAssetsViewControllerColumnCountSliderController, IPXDatabaseProjectsController, IPXLibrary, IPXProjectBrowserModel, IPXSlideshowEditorController, IPXVersionResourceRequest, NSButton, NSMutableArray, NSString, NSTextField, NSView;
@protocol IPXCollection_deprecated, UXNavigationDestination;

@interface IPXProjectBrowserController2 : IPXBrowserController <IPXObjectsControllerChangeReceiver, IPXAssetsViewControllerStyleBasedDelegate, IPXSelectionProvider, PFResourceAccessClient, UXNavigationRoot>
{
    IPXLibrary *_library;
    IPXProjectBrowserModel *_projectManager;
    IPXAssetsViewController *_projectsViewController;
    IPXDatabaseProjectsController *_projectsController;
    IPXAssetsViewControllerColumnCountSliderController *_columnCountSliderController;
    IPXSlideshowEditorController *_slideshowEditorController;
    id <IPXCollection_deprecated> _projects;
    NSMutableArray *_draggingProjects;
    NSView *_noProjectsPlaceholderView;
    NSTextField *_noProjectsPlaceholderViewTitle;
    NSTextField *_noProjectsPlaceholderViewMessage;
    NSButton *_noProjectsPlaceholderViewLearnMore;
    IPXVersionResourceRequest *_outstandingVersionRequest;
    NSString *_uuidOfAlbumToSelectOnNextAppearance;
    BOOL _listeningToProjectsChanges;
    id <UXNavigationDestination> _currentDestination;
}

+ (void)promptForDeleteProjects:(id)arg1 forLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)titleForDeleteMenuItemForProjects:(id)arg1;
+ (id)titleForDuplicateMenuItemForProjects:(id)arg1;
@property(retain) id <UXNavigationDestination> currentDestination; // @synthesize currentDestination=_currentDestination;
@property(readonly) IPXProjectBrowserModel *projectManager; // @synthesize projectManager=_projectManager;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)a_exportOriginal:(id)arg1;
- (void)a_export:(id)arg1;
- (void)_allSelectedVersionsWithResult:(CDUnknownBlockType)arg1;
- (void)a_exportSlideshow:(id)arg1;
- (void)a_print:(id)arg1;
- (void)a_setAlbumSort:(id)arg1;
- (void)a_duplicateItem:(id)arg1;
- (void)a_trashItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)targetFrameForActionIndicator:(id)arg1;
- (void)didTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (void)willTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1;
- (id)itemsForAnimatedTransition;
- (id)selectionProviderCurrentSelectionWithOptions:(long long)arg1;
- (id)assetsViewController:(id)arg1 movedAssetsInSectionsCollection:(id)arg2 atIndexPaths:(id)arg3 toIndexPath:(id)arg4 dropPosition:(long long)arg5;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (unsigned long long)assetsViewController:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (long long)assetsViewController:(id)arg1 allowedDropPositionsForIndexPath:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 shouldUseFilePromisesForDraggingItems:(id)arg2 atIndexPaths:(id)arg3;
- (BOOL)assetsViewController:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)assetsViewController:(id)arg1 didUpdateSectionsCollection:(id)arg2;
- (void)assetsViewController:(id)arg1 changedValueOfLayoutColumnCountScalar:(id)arg2;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (void)assetsViewController:(id)arg1 backgroundWasClickedWithEvent:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 shouldShowHeaderAtIndexPath:(id)arg2;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (id)layoutColumnCountScalarForAssetsViewController:(id)arg1;
- (Class)assetsViewController:(id)arg1 itemCellClassForViewStyle:(unsigned long long)arg2;
- (unsigned long long)styleForAssetsViewController:(id)arg1;
- (id)navigationDestination;
- (id)navigationIdentifier;
- (void)viewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canNavigateToDestination:(id)arg1;
- (void)navigateToPrintProject:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToSlideshow:(id)arg1 animated:(BOOL)arg2;
- (id)databaseObjectsController;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)selectAlbumForUUIDOnNextAppearance:(id)arg1;
- (id)preferredFirstResponder;
- (void)setEdgeInsets:(struct NSEdgeInsets)arg1;
- (void)willBecomeInactive;
- (void)viewFailedTransitionOutWithContext:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)viewFailedTransitionInWithContext:(id)arg1;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)_showOrHidePlaceholderViewAsNeededAnimated:(BOOL)arg1;
- (void)_updateColumnCountSliderValue;
- (void)_stopListeningToProjectsControllerChanges;
- (void)_startListeningToProjectsControllerChanges;
- (void)_setupNavigationItem;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (id)initWithLibrary:(id)arg1 andProjectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


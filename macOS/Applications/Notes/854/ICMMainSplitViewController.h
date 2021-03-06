//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

#import "ICMAttachmentBrowserControllerDelegate-Protocol.h"

@class ICMAttachmentBrowserController, ICMFolderListController, ICMFolderListTreeController, ICMMaskView, ICMNoteSplitViewController, NSSplitViewItem, NSString, NSViewController;

@interface ICMMainSplitViewController : NSSplitViewController <ICMAttachmentBrowserControllerDelegate>
{
    BOOL _folderListOpen;
    BOOL _showAttachmentBrowser;
    BOOL _isFolderAnimating;
    ICMFolderListController *_folderListController;
    NSViewController *_detailViewController;
    ICMNoteSplitViewController *_noteSplitViewController;
    ICMAttachmentBrowserController *_attachmentBrowserController;
    NSSplitViewItem *_folderListItem;
    ICMMaskView *_eventMaskView;
}

@property(retain, nonatomic) ICMMaskView *eventMaskView; // @synthesize eventMaskView=_eventMaskView;
@property(nonatomic) BOOL isFolderAnimating; // @synthesize isFolderAnimating=_isFolderAnimating;
@property(retain, nonatomic) NSSplitViewItem *folderListItem; // @synthesize folderListItem=_folderListItem;
@property(nonatomic, getter=isShowingAttachmentBrowser) BOOL showAttachmentBrowser; // @synthesize showAttachmentBrowser=_showAttachmentBrowser;
@property(readonly, nonatomic, getter=isFolderListOpen) BOOL folderListOpen; // @synthesize folderListOpen=_folderListOpen;
@property(retain, nonatomic) ICMAttachmentBrowserController *attachmentBrowserController; // @synthesize attachmentBrowserController=_attachmentBrowserController;
- (void).cxx_destruct;
- (void)hideAttachmentBrowser;
- (void)attachmentBrowserControllerHide:(id)arg1;
- (void)splitViewItem:(id)arg1 willChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setUpWindowFullScreenMininumWidth:(id)arg1;
- (void)setupSplitViewConstraints;
- (void)setFolderListOpen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)toggleFolderListOpenAnimated:(BOOL)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
@property(readonly, nonatomic) ICMFolderListTreeController *folderListTreeController;
@property(readonly, nonatomic) ICMNoteSplitViewController *noteSplitViewController; // @synthesize noteSplitViewController=_noteSplitViewController;
@property(readonly, nonatomic) NSViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) ICMFolderListController *folderListController; // @synthesize folderListController=_folderListController;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


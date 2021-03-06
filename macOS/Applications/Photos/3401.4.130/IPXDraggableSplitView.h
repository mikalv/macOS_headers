//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAnimationDelegate-Protocol.h"

@class NSAnimation, NSArray, NSMutableArray, NSString;
@protocol IPXDraggableSplitViewDelegate;

@interface IPXDraggableSplitView : NSView <NSAnimationDelegate>
{
    NSMutableArray *_panes;
    NSMutableArray *_dividers;
    NSArray *_preDragPanes;
    BOOL _needsSubviewsLayout;
    NSAnimation *_cleanupAnimation;
    long long _draggingPaneIndex;
    struct CGRect _draggingOFrame;
    struct CGPoint _draggingOffset;
    double _draggingLocalXOffset;
    double _draggingOAlpha;
    BOOL _firstMouseDraggedEvent;
    long long _draggingDividerIndex;
    struct CGRect _draggingDividerOFrame;
    long long _lastSwappedIndex;
    long long _visiblePanesAtDragStart;
    BOOL _userDidMoveDividerByDragging;
    int _paneOrientation;
    double _dividerSize;
    BOOL _isAnimatingDividerChange;
    int _animationStyle;
    double _dividerDragBuffer;
    id <IPXDraggableSplitViewDelegate> _delegate;
    NSView *_preferredResizePane;
    struct NSEdgeInsets _edgeInsets;
}

@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly) BOOL isAnimatingDividerChange; // @synthesize isAnimatingDividerChange=_isAnimatingDividerChange;
@property(nonatomic) __weak NSView *preferredResizePane; // @synthesize preferredResizePane=_preferredResizePane;
@property(nonatomic) __weak id <IPXDraggableSplitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double dividerDragBuffer; // @synthesize dividerDragBuffer=_dividerDragBuffer;
@property(nonatomic) int animationStyle; // @synthesize animationStyle=_animationStyle;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *panes;
- (void)removePane:(id)arg1;
- (void)removePaneAtIndex:(long long)arg1;
- (void)insertPane:(id)arg1 atIndex:(long long)arg2;
- (void)addPane:(id)arg1;
- (long long)numberOfVisiblePanes;
- (long long)numberOfPanes;
- (void)_layoutSubviewsIfNeeded;
- (double)preferredMinimumHeightForPane:(long long)arg1;
- (double)preferredMinimumWidthForPane:(long long)arg1;
- (double)delegateMaximumHeightForPane:(long long)arg1;
- (double)delegateMinimumHeightForPane:(long long)arg1;
- (double)delegateMaximumWidthForPane:(long long)arg1;
- (double)delegateMinimumWidthForPane:(long long)arg1;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 withCallback:(BOOL)arg3;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
- (void)_postDragCleanup;
- (void)_applyAutoresizeDefaults;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)_endOfAnimation:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setProposedDragDividerFrame:(struct CGRect)arg1 forDivider:(long long)arg2;
- (void)_dragPrepForEvent:(id)arg1;
- (void)_liveDragSwapWith:(long long)arg1;
- (void)_rawArrayPaneSwap:(long long)arg1 with:(long long)arg2;
- (void)_animateView:(id)arg1 toNewFrame:(struct CGRect)arg2 withCleanup:(BOOL)arg3 withSwapBlocking:(BOOL)arg4;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 withAnimationStyle:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)paneIsAlreadyAnimating:(long long)arg1;
@property(nonatomic) double dividerSize;
- (double)dividerWidth;
- (double)minXForDividerFrame:(long long)arg1;
- (double)minXForPaneFrame:(long long)arg1;
- (double)minYForDividerFrame:(long long)arg1;
- (double)minYForPaneFrame:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1 forDivider:(long long)arg2 resizeAdjacentPanes:(BOOL)arg3 usingAnimatorProxy:(BOOL)arg4;
- (void)setFrame:(struct CGRect)arg1 forDivider:(long long)arg2 resizeAdjacentPanes:(BOOL)arg3;
- (struct CGRect)frameForDivider:(long long)arg1;
- (id)dividerAt:(long long)arg1;
- (id)currentlyDraggingPaneView;
- (id)paneAt:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1 forPane:(long long)arg2;
- (void)popFrame:(long long)arg1;
- (struct CGRect)frameForPane:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property(readonly, nonatomic) int paneOrientation;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forOrientation:(int)arg2;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


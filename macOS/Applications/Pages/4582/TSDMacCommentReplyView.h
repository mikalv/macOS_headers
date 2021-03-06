//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSDMacAnnotationViewSizing-Protocol.h"

@class NSButton, NSLayoutConstraint, NSString, NSTrackingArea, TSDCommentStorage, TSDMacCommentTextView, TSDMacCommonHeaderView;
@protocol TSDAnnotationEditor, TSDMacCommentReplyViewDelegate;

@interface TSDMacCommentReplyView : NSView <TSDMacAnnotationViewSizing>
{
    BOOL _shouldShowInContentView;
    BOOL _viewIsCollapsed;
    BOOL _isEditing;
    BOOL _collapseView;
    BOOL _isRootComment;
    TSDCommentStorage *_commentStorage;
    TSDMacCommentTextView *_commentTextView;
    TSDMacCommonHeaderView *_headerView;
    id <TSDAnnotationEditor> _annotationEditor;
    id <TSDMacCommentReplyViewDelegate> _delegate;
    unsigned long long _maxNumberOfLines;
    NSLayoutConstraint *_replyViewHeightConstraint;
    NSButton *_showMoreButton;
    NSLayoutConstraint *_showMoreButtonHeightConstraint;
    NSTrackingArea *_trackingArea;
    double _cachedViewHeight;
}

@property(nonatomic) double cachedViewHeight; // @synthesize cachedViewHeight=_cachedViewHeight;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL isRootComment; // @synthesize isRootComment=_isRootComment;
@property(nonatomic) BOOL collapseView; // @synthesize collapseView=_collapseView;
@property(retain, nonatomic) NSLayoutConstraint *showMoreButtonHeightConstraint; // @synthesize showMoreButtonHeightConstraint=_showMoreButtonHeightConstraint;
@property(retain, nonatomic) NSButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) NSLayoutConstraint *replyViewHeightConstraint; // @synthesize replyViewHeightConstraint=_replyViewHeightConstraint;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) BOOL viewIsCollapsed; // @synthesize viewIsCollapsed=_viewIsCollapsed;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) BOOL shouldShowInContentView; // @synthesize shouldShowInContentView=_shouldShowInContentView;
@property(nonatomic) __weak id <TSDMacCommentReplyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TSDAnnotationEditor> annotationEditor; // @synthesize annotationEditor=_annotationEditor;
@property(retain, nonatomic) TSDMacCommonHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TSDMacCommentTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
- (void).cxx_destruct;
- (double)p_leadingPaddingMultiplier;
- (BOOL)p_isNewestReply;
- (BOOL)p_isReplyBelowEditing;
- (double)p_strokeRightEdgeInset;
- (double)p_strokeLeftEdgeInset;
- (double)p_edgeInset;
- (BOOL)p_shouldDrawBottomLine;
- (double)p_showMoreButtonBottomPadding;
- (void)p_addShowMoreButtonConstraints;
- (void)p_addReplyTextViewConstraints;
- (void)p_addHeaderViewConstraints;
- (void)p_setupConstraints;
- (void)p_setShowMoreButtonTitle:(id)arg1;
- (void)p_setupViews;
- (void)p_setupTrackingAreas;
- (void)updateTrackingAreas;
- (void)p_setup;
- (void)p_updateShowMoreButtonHidden:(BOOL)arg1;
- (void)p_updateViewTruncationState;
- (double)prototypeHeight;
- (void)setWidth:(double)arg1;
- (void)updateDateFieldRelativeToNow;
- (id)fauxAnnotationUUID;
- (void)collapseTextView;
- (void)expandTextView;
- (void)showLessButtonClicked:(id)arg1;
- (void)showMoreButtonClicked:(id)arg1;
- (unsigned long long)linesOfTextInView;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 isRootComment:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


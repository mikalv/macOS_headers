//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTCellErrorWarningControllerDelegate-Protocol.h"
#import "TSTTableRepDelegate-Protocol.h"

@class NSString, NSTimer, TSTCellHighlightingController, TSTCellSelection, TSTCommentHosting, TSTDropHandler, TSTTableRep;

@interface TSTMacTableRepDelegate : NSObject <TSTTableRepDelegate, TSTCellErrorWarningControllerDelegate>
{
    TSTTableRep *mRep;
    TSTCellSelection *mOldSelection;
    BOOL mShowDragAndDropHighlight;
    TSTDropHandler *mDropHandler;
    BOOL mHidingCursorForTextEditing;
    BOOL mAllowCellHighlighting;
    BOOL mMouseOverRep;
    NSTimer *mMouseExitedTimer;
    TSTCommentHosting *mPreviousRolloverComment;
    TSTCellHighlightingController *mCellHighlightingController;
}

+ (Class)chromeProviderClass;
@property(nonatomic) TSTTableRep *tableRep; // @synthesize tableRep=mRep;
- (BOOL)handleSingleTapForCommentBadgeForCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)p_didHitCellCommentBadgeForCellID:(struct TSUCellCoord)arg1 atPoint:(struct CGPoint)arg2;
- (void)hideDragAndDropUI;
- (void)updateDragAndDropUIForPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2;
- (id)dragAndDropHighlightLayer;
- (BOOL)shouldShowDragAndDropHighlight;
- (BOOL)handleDragOperation:(unsigned long long)arg1 withSender:(id)arg2 atPoint:(struct CGPoint)arg3 withPromisedFiles:(id)arg4;
- (unsigned long long)dragOperationForSender:(id)arg1 atPoint:(struct CGPoint)arg2 withPromisedTypes:(id)arg3;
- (id)newTrackerForKnob:(id)arg1;
- (void)didAddFillKnobs:(id)arg1;
- (BOOL)showSelectionKnobsInEditMode;
- (Class)fillKnobTrackerClass;
- (Class)rowColResizerKnobTrackerClass;
- (Class)rowColMoverKnobTrackerClass;
- (Class)selectionMoverKnobTrackerClass;
- (Class)nameResizerKnobTrackerClass;
- (BOOL)showRangeKnobsInControlCellMode;
- (void)addKnobsToArray:(id)arg1;
- (void)willBeginKnobTrackingWithTracker:(id)arg1;
- (void)p_hideStepperHUDIfNeededAtCanvasPoint:(struct CGPoint)arg1;
- (void)hidingCursorForTextEditing;
- (BOOL)p_isFormulaCellEditorActive;
- (BOOL)p_isControlCellEditorActive;
- (BOOL)isCellCurrentlyBeingEdited;
- (void)willBeginTextOrFormulaEditing;
- (void)endRatingsDrag;
- (void)moveRatingsDragToPoint:(struct CGPoint)arg1;
- (void)startRatingsDragAtPoint:(struct CGPoint)arg1;
- (id)p_controlCellEditor;
- (BOOL)canStartRatingsDragAtPoint:(struct CGPoint)arg1 isLongPress:(BOOL)arg2;
- (void)dismissControlCellEditorForDoubleTap;
- (BOOL)controlCellTypeDisallowsDoubleTap:(int)arg1;
- (void)modifyControlCellFromPoint:(struct CGPoint)arg1 isTap:(BOOL)arg2 phase:(int)arg3;
- (struct TSUCellCoord)shouldStartControlCellUIForSelection;
- (BOOL)shouldShowControlCellUIWithCurrentKnobTracker;
- (BOOL)shouldShowControlCellUI;
- (void)hyperlinkTapped:(id)arg1 inCell:(struct TSUCellCoord)arg2;
- (void)willDismissControlCellEditorForSingleTapOnControlCellAtPoint:(struct CGPoint)arg1;
- (void)editorControllerSelectionDidChange:(id)arg1;
- (void)didUpdateFromLayout;
- (void)didSetSelection:(id)arg1;
- (void)willSetSelection:(id)arg1 atPoint:(struct CGPoint)arg2 isHyperlink:(BOOL)arg3;
- (void)cellErrorWarningController:(id)arg1 didClickToShowCellReference:(CDStruct_de21cb60)arg2;
- (void)hideErrorWarningPopoverIfVisible;
- (void)toggleErrorWarningPopoverForCell:(struct TSUCellCoord)arg1 atUnscaledCanvasPoint:(struct CGPoint)arg2;
- (id)p_cellErrorWarningController;
- (int)chromeMode;
- (void)beginEditingAtCellID:(struct TSUCellCoord)arg1 clearSubmodes:(BOOL)arg2;
- (void)p_commandWillExecuteUndoOrRedo;
- (BOOL)safeToShowFillKnobs;
- (void)p_hideCellHighlightingIfNeeded;
- (void)p_handleMouseMovedForCellHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_handleMouseMovedForCommentRolloverAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_mouseExitTimerFired:(id)arg1;
- (BOOL)canStartCellDragSelectionAtPoint:(struct CGPoint)arg1;
- (void)willHandleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)willHandleDoubleTapAtPoint:(struct CGPoint)arg1;
- (void)willBeginDynamicOperation;
- (void)becameNotSelected;
- (void)dealloc;
- (void)repWillBeRemoved;
- (id)initWithTableRep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibility-Protocol.h"
#import "NSAccessibilityGroup-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSPopover, NSString, NSURL, SUPartitionModelController, SUPieSlice;
@protocol SUPartitionChartViewDelegate;

@interface SUPartitionChartView : NSView <NSAccessibilityGroup, NSAccessibility>
{
    BOOL _isMouseDownInBottomHandle;
    BOOL _isMouseDownInTopHandle;
    BOOL _isMouseDownSplitting;
    BOOL _isEditingSliceDrawAtMinimumSize;
    BOOL _isDraggingBottomHandle;
    BOOL _isDraggingTopHandle;
    BOOL _showAllMinimumSizes;
    NSObject<SUPartitionChartViewDelegate> *_delegate;
    NSPopover *_verySmallDiskPopover;
    SUPartitionModelController *_model;
    NSMutableArray *_visualModel;
    unsigned long long _totalSize;
    SUPieSlice *_selectedSlice;
    long long _lastPopoverPartition;
    unsigned long long _lastPopoverEdge;
    NSMutableArray *_pieSliceAccessibilityElements;
    double _denormalizedPercentage;
}

@property BOOL showAllMinimumSizes; // @synthesize showAllMinimumSizes=_showAllMinimumSizes;
@property BOOL isDraggingTopHandle; // @synthesize isDraggingTopHandle=_isDraggingTopHandle;
@property BOOL isDraggingBottomHandle; // @synthesize isDraggingBottomHandle=_isDraggingBottomHandle;
@property BOOL isEditingSliceDrawAtMinimumSize; // @synthesize isEditingSliceDrawAtMinimumSize=_isEditingSliceDrawAtMinimumSize;
@property BOOL isMouseDownSplitting; // @synthesize isMouseDownSplitting=_isMouseDownSplitting;
@property BOOL isMouseDownInTopHandle; // @synthesize isMouseDownInTopHandle=_isMouseDownInTopHandle;
@property BOOL isMouseDownInBottomHandle; // @synthesize isMouseDownInBottomHandle=_isMouseDownInBottomHandle;
@property double denormalizedPercentage; // @synthesize denormalizedPercentage=_denormalizedPercentage;
@property(retain) NSMutableArray *pieSliceAccessibilityElements; // @synthesize pieSliceAccessibilityElements=_pieSliceAccessibilityElements;
@property unsigned long long lastPopoverEdge; // @synthesize lastPopoverEdge=_lastPopoverEdge;
@property long long lastPopoverPartition; // @synthesize lastPopoverPartition=_lastPopoverPartition;
@property(retain) SUPieSlice *selectedSlice; // @synthesize selectedSlice=_selectedSlice;
@property unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain) NSMutableArray *visualModel; // @synthesize visualModel=_visualModel;
@property(retain) SUPartitionModelController *model; // @synthesize model=_model;
@property(retain) NSPopover *verySmallDiskPopover; // @synthesize verySmallDiskPopover=_verySmallDiskPopover;
@property __weak NSObject<SUPartitionChartViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy) NSArray *accessibilityChildren;
@property(copy) NSString *accessibilityLabel;
- (void)_buildAccessibilityElements;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;
- (void)_clearSelection;
- (double)_updateInfoFields:(id)arg1 minimumRadiusPercentage:(double)arg2;
- (void)_updateInfoFieldColors:(id)arg1;
- (void)_updateInfoFields:(id)arg1;
- (void)_updateAllSliceInfoFields;
- (BOOL)_isTextFieldRect:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2 clippedInSlice:(id)arg3;
- (void)_computeVisualModelWhileEditingPartition:(id)arg1 andPartition:(id)arg2;
- (void)_computeVisualModel;
- (void)_modelUpdated:(id)arg1;
- (struct CGRect)_dragHandleRectFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)_pointOnCircleAtNormalizedPercent:(double)arg1;
- (double)_degreesForNormalizedPercentage:(double)arg1;
- (struct CGPoint)_infoPointForPartitionAtPercentage:(double)arg1 radiusPercentage:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (long long)_partitionForPercentage:(double)arg1;
- (double)_normalizedPercentageAtPoint:(struct CGPoint)arg1 isInRange:(char *)arg2;
- (double)_normalizedPercentageAtPoint:(struct CGPoint)arg1;
- (double)_normalizedPercentageClicked:(id)arg1 isInRange:(char *)arg2;
- (double)_distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (BOOL)_processDragHandlesWithEvent:(id)arg1;
- (void)_handleDraggingOfPartition:(id)arg1 nextPartition:(id)arg2 withNormalizedDegrees:(double)arg3;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)selectPreviousPartition;
- (void)selectNextPartition;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)flagsChanged:(id)arg1;
- (BOOL)isDrawAtMinimumSizePartitionAtIndex:(long long)arg1;
- (BOOL)isTransientPartitionAtIndex:(long long)arg1;
- (void)setPartitionAtIndex:(long long)arg1 isTransient:(BOOL)arg2;
- (void)clearTransientSelection;
- (void)setPartitionModel:(id)arg1;
- (long long)selectedPartitionIndex;
- (void)selectPartitionAtIndex:(long long)arg1;
- (struct CGRect)circleRect;
- (double)chartRadius;
- (double)chartDiameter;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property struct CGPoint accessibilityActivationPoint;
@property(copy) NSArray *accessibilityAllowedValues;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible;
@property(retain) id accessibilityApplicationFocusedUIElement;
@property(retain) id accessibilityCancelButton;
@property(retain) id accessibilityClearButton;
@property(retain) id accessibilityCloseButton;
@property long long accessibilityColumnCount;
@property(copy) NSArray *accessibilityColumnHeaderUIElements;
@property struct _NSRange accessibilityColumnIndexRange;
@property(copy) NSArray *accessibilityColumnTitles;
@property(copy) NSArray *accessibilityColumns;
@property(copy) NSArray *accessibilityContents;
@property(retain) id accessibilityCriticalValue;
@property(retain) id accessibilityDecrementButton;
@property(retain) id accessibilityDefaultButton;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed;
@property __weak id accessibilityDisclosedByRow;
@property(retain) id accessibilityDisclosedRows;
@property long long accessibilityDisclosureLevel;
@property(copy) NSString *accessibilityDocument;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited;
@property(getter=isAccessibilityElement) BOOL accessibilityElement;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded;
@property __weak id accessibilityExtrasMenuBar;
@property(copy) NSString *accessibilityFilename;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused;
@property(retain) id accessibilityFocusedWindow;
@property struct CGRect accessibilityFrame;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost;
@property(retain) id accessibilityFullScreenButton;
@property(retain) id accessibilityGrowArea;
@property(copy) NSArray *accessibilityHandles;
@property(retain) id accessibilityHeader;
@property(copy) NSString *accessibilityHelp;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden;
@property(retain) id accessibilityHorizontalScrollBar;
@property(copy) NSString *accessibilityHorizontalUnitDescription;
@property long long accessibilityHorizontalUnits;
@property(copy) NSString *accessibilityIdentifier;
@property(retain) id accessibilityIncrementButton;
@property long long accessibilityIndex;
@property long long accessibilityInsertionPointLineNumber;
@property(copy) NSArray *accessibilityLabelUIElements;
@property float accessibilityLabelValue;
@property(copy) NSArray *accessibilityLinkedUIElements;
@property(getter=isAccessibilityMain) BOOL accessibilityMain;
@property(retain) id accessibilityMainWindow;
@property(retain) id accessibilityMarkerGroupUIElement;
@property(copy) NSString *accessibilityMarkerTypeDescription;
@property(copy) NSArray *accessibilityMarkerUIElements;
@property(retain) id accessibilityMarkerValues;
@property(retain) id accessibilityMaxValue;
@property __weak id accessibilityMenuBar;
@property(retain) id accessibilityMinValue;
@property(retain) id accessibilityMinimizeButton;
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized;
@property(getter=isAccessibilityModal) BOOL accessibilityModal;
@property(copy) NSArray *accessibilityNextContents;
@property long long accessibilityNumberOfCharacters;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow;
@property long long accessibilityOrientation;
@property(retain) id accessibilityOverflowButton;
@property __weak id accessibilityParent;
@property(copy) NSString *accessibilityPlaceholderValue;
@property(copy) NSArray *accessibilityPreviousContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent;
@property(retain) id accessibilityProxy;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired;
@property(copy) NSString *accessibilityRole;
@property(copy) NSString *accessibilityRoleDescription;
@property long long accessibilityRowCount;
@property(copy) NSArray *accessibilityRowHeaderUIElements;
@property struct _NSRange accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityRows;
@property long long accessibilityRulerMarkerType;
@property(retain) id accessibilitySearchButton;
@property(retain) id accessibilitySearchMenu;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected;
@property(copy) NSArray *accessibilitySelectedCells;
@property(copy) NSArray *accessibilitySelectedChildren;
@property(copy) NSArray *accessibilitySelectedColumns;
@property(copy) NSArray *accessibilitySelectedRows;
@property(copy) NSString *accessibilitySelectedText;
@property struct _NSRange accessibilitySelectedTextRange;
@property(copy) NSArray *accessibilitySelectedTextRanges;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements;
@property struct _NSRange accessibilitySharedCharacterRange;
@property(copy) NSArray *accessibilitySharedFocusElements;
@property(copy) NSArray *accessibilitySharedTextUIElements;
@property(retain) id accessibilityShownMenu;
@property long long accessibilitySortDirection;
@property(copy) NSArray *accessibilitySplitters;
@property(copy) NSString *accessibilitySubrole;
@property(copy) NSArray *accessibilityTabs;
@property(copy) NSString *accessibilityTitle;
@property __weak id accessibilityTitleUIElement;
@property(retain) id accessibilityToolbarButton;
@property __weak id accessibilityTopLevelUIElement;
@property(copy) NSURL *accessibilityURL;
@property(copy) NSString *accessibilityUnitDescription;
@property long long accessibilityUnits;
@property(retain) id accessibilityValue;
@property(copy) NSString *accessibilityValueDescription;
@property(retain) id accessibilityVerticalScrollBar;
@property(copy) NSString *accessibilityVerticalUnitDescription;
@property long long accessibilityVerticalUnits;
@property(copy) NSArray *accessibilityVisibleCells;
@property struct _NSRange accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilityVisibleChildren;
@property(copy) NSArray *accessibilityVisibleColumns;
@property(copy) NSArray *accessibilityVisibleRows;
@property(retain) id accessibilityWarningValue;
@property __weak id accessibilityWindow;
@property(copy) NSArray *accessibilityWindows;
@property(retain) id accessibilityZoomButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


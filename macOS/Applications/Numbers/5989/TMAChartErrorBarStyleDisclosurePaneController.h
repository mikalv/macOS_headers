//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartDisclosureInspectorPaneController.h"

@class NSArrayController, NSSegmentedControl, NSTextField;

@interface TMAChartErrorBarStyleDisclosurePaneController : TMAChartDisclosureInspectorPaneController
{
    NSArrayController *mSeriesArrayController;
    NSSegmentedControl *mLineEndSegmentedControl;
    NSTextField *_lineEndLabel;
}

+ (id)p_keyPathsToObserveForSegmentedControl;
+ (id)seriesProxiesKeyPath;
+ (id)seriesPropertyVendorsBindingKeyPath;
+ (id)nibName;
@property(nonatomic) __weak NSTextField *lineEndLabel; // @synthesize lineEndLabel=_lineEndLabel;
@property(nonatomic) __weak NSSegmentedControl *lineEndSegmentedControl; // @synthesize lineEndSegmentedControl=mLineEndSegmentedControl;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_segmentClicked:(id)arg1;
- (void)p_updateSegmentedControl;
- (void)loadView;
- (void)dealloc;

@end


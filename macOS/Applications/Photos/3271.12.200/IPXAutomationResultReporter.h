//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFAutomationResultReporter.h>

@class NSButton, NSLayoutConstraint, NSMutableArray, NSWindow, _IPXAutomationResultsView;

@interface IPXAutomationResultReporter : PFAutomationResultReporter
{
    NSWindow *_automationWindow;
    _IPXAutomationResultsView *_documentView;
    NSMutableArray *_deferredMeasurements;
    NSButton *_clearButton;
    NSLayoutConstraint *_heightConstraint;
}

+ (void)start;
- (void).cxx_destruct;
- (void)reportValue:(id)arg1 forMeasurement:(id)arg2;
- (id)_newLabelWithValue:(id)arg1;
- (void)reset;
- (void)reset:(id)arg1;
- (void)_createWindow;
- (void)_contentReportedReady:(id)arg1;
- (id)init;

@end


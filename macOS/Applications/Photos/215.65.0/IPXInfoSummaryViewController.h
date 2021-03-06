//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class IPXVersionsSummarizer, NSString, NSView;

@interface IPXInfoSummaryViewController : IPXViewController <IPXMetadataEditorViewController>
{
    IPXVersionsSummarizer *_summarizer;
    BOOL _dataPreparationDisabled;
}

+ (id)newInfoSummaryViewController;
@property(getter=isDataPreparationDisabled) BOOL dataPreparationDisabled; // @synthesize dataPreparationDisabled=_dataPreparationDisabled;
- (void).cxx_destruct;
- (BOOL)_itemsContainNonImages:(id)arg1;
- (BOOL)updateViewWithPreparedData:(id)arg1 isNew:(BOOL)arg2;
- (void)prepareDataForSelection:(id)arg1 updateDelegate:(id)arg2 updateToken:(unsigned long long)arg3;
- (id)summaryView;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)editorIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end


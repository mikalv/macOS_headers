//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallModalDialogController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MAButton, MAKitTableView, MAPopUpButton, MATextField, NSArray, NSDateFormatter, NSString, NSURL, ProjectInformation;

@interface AlternativeAndBackupSelectionWindowController : SmallModalDialogController <NSTableViewDataSource, NSTableViewDelegate>
{
    MATextField *alternativeButtonLabel;
    MAPopUpButton *alternativePopupButton;
    MAKitTableView *backupsTableView;
    MAButton *okayButton;
    MAButton *cancelButton;
    NSURL *_documentURL;
    ProjectInformation *_projInfo;
    NSArray *_backups;
    NSDateFormatter *_dateFormatter;
}

+ (id)nibName;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSArray *backups; // @synthesize backups=_backups;
@property(retain, nonatomic) ProjectInformation *projInfo; // @synthesize projInfo=_projInfo;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)backupSelectionChanged:(id)arg1;
- (void)alternativeSelectionChanged:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)click_OK:(id)arg1;
- (void)updateUI;
- (void)windowDidLoad;
- (long long)showForDocumentAtURL:(id)arg1 preselectAlternativeIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class LPBuildStep, LPBuildViewController, NSButton;

__attribute__((visibility("hidden")))
@interface LPAddItemsTableCellView : NSTableCellView
{
    NSButton *_addItemsButton;
    LPBuildViewController *_buildViewController;
    LPBuildStep *_associatedBuildStep;
}

@property(nonatomic) LPBuildStep *associatedBuildStep; // @synthesize associatedBuildStep=_associatedBuildStep;
@property(nonatomic) LPBuildViewController *buildViewController; // @synthesize buildViewController=_buildViewController;
- (void)addItemsButtonAction:(id)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface App_Store.BaseSidebarItemListView : NSView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: items
    // Error parsing type: , name: itemViews
    // Error parsing type: , name: selectedItem
    // Error parsing type: , name: previouslySelectedItem
}

+ (double)sidebarItemHeight;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)accessibilityOrientation;
- (id)accessibilitySelectedRows;
- (id)accessibilityLabel;
- (id)accessibilityRows;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)arg1;
- (void)layout;
@property(nonatomic, readonly) struct CGSize fittingSize;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end


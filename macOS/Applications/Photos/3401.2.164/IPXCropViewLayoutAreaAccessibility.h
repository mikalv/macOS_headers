//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCropViewAccessibilityElement.h"

@class NSArray, NSView;

@interface IPXCropViewLayoutAreaAccessibility : IPXCropViewAccessibilityElement
{
    NSArray *_accessibilityChildren;
    NSArray *_accessibilitySelectedChildren;
}

- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (void)setAccessibilityChildren:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)accessibilityScreenSizeForLayoutSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityScreenPointForLayoutPoint:(struct CGPoint)arg1;
- (struct CGSize)accessibilityLayoutSizeForScreenSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityLayoutPointForScreenPoint:(struct CGPoint)arg1;
- (id)accessibilityVerticalUnitDescription;
- (long long)accessibilityVerticalUnits;
- (id)accessibilityHorizontalUnitDescription;
- (long long)accessibilityHorizontalUnits;
- (id)accessibilityChildren;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;
@property(readonly, nonatomic) __weak NSView *accessibilityContainerView;

@end


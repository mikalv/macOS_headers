//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface ABBookButtonCell : NSButtonCell
{
    NSImage *_activeLeftCap;
    NSImage *_activeRightCap;
    NSImage *_activeTile;
    NSImage *_disabledLeftCap;
    NSImage *_disabledRightCap;
    NSImage *_disabledTile;
    NSImage *_pressedLeftCap;
    NSImage *_pressedRightCap;
    NSImage *_pressedTile;
}

- (void)drawCellForState:(long long)arg1 frame:(struct CGRect)arg2 flipped:(BOOL)arg3;
- (long long)cellState;
- (unsigned long long)highlightsBy;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)ABBookButtonCell_commonInit;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end


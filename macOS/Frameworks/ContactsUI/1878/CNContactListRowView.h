//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSColor;

@interface CNContactListRowView : NSTableRowView
{
    BOOL _shouldDrawBackground;
    BOOL _shouldDrawBottomGridLine;
    NSColor *_bottomGridLineColor;
}

+ (id)postHeaderRowView;
+ (id)headerRowView;
+ (id)rowView;
@property(copy) NSColor *bottomGridLineColor; // @synthesize bottomGridLineColor=_bottomGridLineColor;
@property BOOL shouldDrawBottomGridLine; // @synthesize shouldDrawBottomGridLine=_shouldDrawBottomGridLine;
@property BOOL shouldDrawBackground; // @synthesize shouldDrawBackground=_shouldDrawBackground;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)drawSeparatorInRect:(struct CGRect)arg1;

@end


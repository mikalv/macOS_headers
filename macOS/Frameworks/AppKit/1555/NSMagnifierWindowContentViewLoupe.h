//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSMagnifierWindowContentView-Protocol.h>

@class NSBezierPath, NSBitmapImageRep, NSColor, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NSMagnifierWindowContentViewLoupe : NSView <NSMagnifierWindowContentView>
{
    NSBitmapImageRep *_contentImageRep;
    NSBezierPath *_clipPath;
    NSTextField *_colorLabel;
    NSColor *_cachedColor;
    long long _loupeMode;
}

+ (struct CGSize)magnifierViewSize;
@property(retain) NSBitmapImageRep *contentImageRep; // @synthesize contentImageRep=_contentImageRep;
- (void)setNextMode;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)magnifyingGlassCenterPosition;
- (double)magnifyingGlassRadius;
- (double)magnifiedPointsPerPixel;
- (id)borderColor;
- (id)color;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


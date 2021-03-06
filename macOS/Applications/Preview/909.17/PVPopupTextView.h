//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class PVAnnotation;

@interface PVPopupTextView : NSTextView
{
    BOOL _selfChangingText;
    PVAnnotation *_annotation;
    double _headerHeight;
    BOOL _linedPaper;
}

@property BOOL isLinedPaper; // @synthesize isLinedPaper=_linedPaper;
- (void).cxx_destruct;
- (id)typingAttributes;
@property double headerHeight;
- (struct CGPoint)textContainerOrigin;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;
- (BOOL)drawsBackground;
- (BOOL)allowsVibrancy;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)didChangeText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) PVAnnotation *annotation;
- (BOOL)resignFirstResponder;
- (void)endObservingAnnotation;
- (void)beginObservingAnnotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


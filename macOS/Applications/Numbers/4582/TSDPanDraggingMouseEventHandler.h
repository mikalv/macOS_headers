//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDModalMouseEventHandler-Protocol.h"

@class NSString, TSDInteractiveCanvasController;

@interface TSDPanDraggingMouseEventHandler : NSObject <TSDModalMouseEventHandler>
{
    struct CGRect _initialRect;
    struct CGPoint _deltaFromInitialPoint;
    BOOL _dragging;
    TSDInteractiveCanvasController *_icc;
}

@property(nonatomic) __weak TSDInteractiveCanvasController *icc; // @synthesize icc=_icc;
- (void).cxx_destruct;
- (BOOL)handleKeyUpWithEvent:(id)arg1;
- (BOOL)handleKeyDownWithEvent:(id)arg1;
- (BOOL)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)updateCursorAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


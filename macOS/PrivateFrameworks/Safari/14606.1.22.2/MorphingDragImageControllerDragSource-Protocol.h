//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class MorphingDragImageController, NSWindow;

@protocol MorphingDragImageControllerDragSource <NSObject>
- (NSWindow *)dragDestinationWindowForMorphingDragImage:(MorphingDragImageController *)arg1;

@optional
- (void)morphingDragImage:(MorphingDragImageController *)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (void)morphingDragImage:(MorphingDragImageController *)arg1 movedToPointOnScreen:(struct CGPoint)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXRectangle.h"

@interface IPXCropDragEdgeLayer : IPXRectangle
{
    double _hPadding;
    double _vPadding;
}

+ (id)shapeInRect:(struct CGRect)arg1 horizontalHitPadding:(double)arg2 verticalHitPadding:(double)arg3;
- (BOOL)containsPoint:(struct CGPoint)arg1;

@end


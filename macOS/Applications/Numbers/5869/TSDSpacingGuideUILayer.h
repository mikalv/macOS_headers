//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, TSDSwappableAxesGeometry;

@interface TSDSpacingGuideUILayer : CALayer
{
    CAShapeLayer *mArrowLayer;
    BOOL mUseVisibleRect;
    double mWidth;
    TSDSwappableAxesGeometry *mHorizontalGeom;
    struct CGColor *mGuideColor;
}

- (void)p_generateArrowLayerForSpacingRect:(struct CGRect)arg1 andViewScale:(double)arg2;
- (void)setFrameFromSpacingRect:(struct CGRect)arg1 icc:(id)arg2;
- (id)initWithSpacingRect:(struct CGRect)arg1 ofOrientation:(int)arg2 icc:(id)arg3 useVisibleRect:(BOOL)arg4;

@end


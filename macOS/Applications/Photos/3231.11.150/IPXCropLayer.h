//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXRectangle.h"

#import "CALayerDelegate-Protocol.h"

@class IPXCropThirdsLayer, IPXStraightenGridLayer, NSArray, NSString;

@interface IPXCropLayer : IPXRectangle <CALayerDelegate>
{
    IPXCropThirdsLayer *_thirdsLayer;
    IPXStraightenGridLayer *_straightenLayer;
    NSArray *_dragHandles;
    double _interiorGridOpacity;
    double _exteriorGridOpacity;
    BOOL _showStraightenGrid;
}

@property(nonatomic) BOOL showStraightenGrid; // @synthesize showStraightenGrid=_showStraightenGrid;
- (void).cxx_destruct;
- (void)updatePathToBounds;
- (struct CGPath *)newCGPath;
- (void)setHighlight:(BOOL)arg1 cropHandle:(long long)arg2;
- (void)setHighlight:(BOOL)arg1 cropHandle:(long long)arg2 highlightColor:(id)arg3;
- (long long)cropHandleHitTest:(struct CGPoint)arg1;
@property(nonatomic) double exteriorGridOpacity;
@property(nonatomic) double interiorGridOpacity;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


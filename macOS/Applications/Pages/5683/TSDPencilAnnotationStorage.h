//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKPencilAnnotationStorage-Protocol.h"

@class NSData, NSString, PKDrawing, TSPData, TSUColor;

@interface TSDPencilAnnotationStorage : TSPObject <GSSPAutoEncodable, TSKPencilAnnotationStorage>
{
    struct CGPath *_path;
    TSPData *_rasterizedImageTSPData;
    TSUColor *_penColor;
    long long _toolType;
    long long _attachedLocation;
    long long _attachedType;
    double _percentOfPAContainedInParentRep;
    unsigned long long _textBaselinesTouchedCount;
    unsigned long long _visibleStrokesCount;
    PKDrawing *_drawingForTextRecognition;
    TSPData *_encodedDrawingTSPData;
    struct CGSize _rasterizedImageSize;
    struct CGPoint _markupOffset;
    struct CGSize _originalAttachedSize;
    struct CGRect _unscaledBoundsOfStrokes;
}

@property(readonly, nonatomic) TSPData *encodedDrawingTSPData; // @synthesize encodedDrawingTSPData=_encodedDrawingTSPData;
@property(retain, nonatomic) PKDrawing *drawingForTextRecognition; // @synthesize drawingForTextRecognition=_drawingForTextRecognition;
@property(nonatomic) struct CGRect unscaledBoundsOfStrokes; // @synthesize unscaledBoundsOfStrokes=_unscaledBoundsOfStrokes;
@property(nonatomic) unsigned long long visibleStrokesCount; // @synthesize visibleStrokesCount=_visibleStrokesCount;
@property(nonatomic) unsigned long long textBaselinesTouchedCount; // @synthesize textBaselinesTouchedCount=_textBaselinesTouchedCount;
@property(nonatomic) double percentOfPAContainedInParentRep; // @synthesize percentOfPAContainedInParentRep=_percentOfPAContainedInParentRep;
@property(nonatomic) struct CGSize originalAttachedSize; // @synthesize originalAttachedSize=_originalAttachedSize;
@property(nonatomic) struct CGPoint markupOffset; // @synthesize markupOffset=_markupOffset;
@property(nonatomic) long long attachedType; // @synthesize attachedType=_attachedType;
@property(nonatomic) long long attachedLocation; // @synthesize attachedLocation=_attachedLocation;
@property(readonly, nonatomic) long long toolType; // @synthesize toolType=_toolType;
@property(readonly, nonatomic) TSUColor *penColor; // @synthesize penColor=_penColor;
@property(readonly, nonatomic) TSPData *rasterizedImageTSPData; // @synthesize rasterizedImageTSPData=_rasterizedImageTSPData;
@property(readonly, nonatomic) struct CGSize rasterizedImageSize; // @synthesize rasterizedImageSize=_rasterizedImageSize;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationStorageArchive *)arg1 unarchiver:(id)arg2;
- (void)initializeTextRecognitionIfNeeded;
@property(readonly, nonatomic) BOOL needsTextRecognition;
@property(readonly, nonatomic) BOOL shouldSplitAcrossAnchorRects;
@property(readonly, nonatomic) BOOL shouldResizeWithAnchor;
@property(readonly, nonatomic) struct CGPoint centerOfStrokes;
@property(readonly, nonatomic) PKDrawing *drawing;
@property(readonly, nonatomic) NSData *encodedDrawing;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 markupOffset:(struct CGPoint)arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect)arg8 originalAttachedSize:(struct CGSize)arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14;
- (id)initWithContext:(id)arg1 markupOffset:(struct CGPoint)arg2 rasterizedImage:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect)arg8 originalAttachedSize:(struct CGSize)arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14;
- (void)populateGSSPPencilAnnotationStorage:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSDImageNaturalSizeCommand : TSDInfoCommand <GSSPAutoEncodable>
{
    struct CGSize _naturalSize;
    struct CGSize _oldNaturalSize;
}

- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_setNaturalSize:(struct CGSize)arg1;
- (id)p_imageInfo;
- (BOOL)process;
- (id)propertyNameForTransform;
- (id)initWithImageInfo:(id)arg1 newNaturalSize:(struct CGSize)arg2;
- (void)populateGSSPCmdImageNaturalSize:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end


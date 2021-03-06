//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ChannelSettingsUtilities : NSObject
{
    struct CDocumentLogic *_document;
}

- (void)loadSettingFromURL:(id)arg1 withCategory:(id)arg2 intoTrack:(struct TPosOneBasedTrackNr *)arg3 withGinst:(int *)arg4 inFolderWithID:(int)arg5 enablePatchMerging:(BOOL)arg6 importFlags:(unsigned int)arg7;
- (BOOL)_setChannelStrip:(const struct CFileRef *)arg1 forGinst:(int)arg2 withName:(const char *)arg3 andCategory:(const char *)arg4 filterOptions:(unsigned int)arg5;
- (struct CSong *)_currentSong;
- (void)dealloc;
- (id)initWithDocument:(struct CDocumentLogic *)arg1;

@end


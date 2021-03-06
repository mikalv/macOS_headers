//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRReusableCellVisibilityContext.h"

@class FRFeedCollectionViewLayoutSectionDescriptorForYou, NFLHeadlineTileInfo, NSString;

@interface FRReusableCellVisibilityContextHeadlineTileInfo : FRReusableCellVisibilityContext
{
    BOOL _hasVideo;
    BOOL _playingBackVideo;
    NFLHeadlineTileInfo *_tileInfo;
    NSString *_viewingSessionUUID;
    FRFeedCollectionViewLayoutSectionDescriptorForYou *_forYouSectionDescriptor;
    unsigned long long _articleDisplayRankInGroup;
    struct CGRect _viewFrameInScreen;
}

@property(readonly, nonatomic) unsigned long long articleDisplayRankInGroup; // @synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup;
@property(readonly, nonatomic, getter=isPlayingBackVideo) BOOL playingBackVideo; // @synthesize playingBackVideo=_playingBackVideo;
@property(readonly, nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly, copy, nonatomic) FRFeedCollectionViewLayoutSectionDescriptorForYou *forYouSectionDescriptor; // @synthesize forYouSectionDescriptor=_forYouSectionDescriptor;
@property(readonly, copy, nonatomic) NSString *viewingSessionUUID; // @synthesize viewingSessionUUID=_viewingSessionUUID;
@property(readonly, nonatomic) struct CGRect viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(readonly, copy, nonatomic) NFLHeadlineTileInfo *tileInfo; // @synthesize tileInfo=_tileInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHeadlineTileInfo:(id)arg1 viewFrameInScreen:(struct CGRect)arg2 viewingSessionUUID:(id)arg3 forYouSectionDescriptor:(id)arg4 hasVideo:(BOOL)arg5 isPlayingBackVideo:(BOOL)arg6 articleDisplayRankInGroup:(unsigned long long)arg7;

@end


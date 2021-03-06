//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSURL, PFCoalescer, PFDispatchQueue, PHLIngestController, RDDatabase;

@interface ICPPhotoStreamLibrary : NSObject
{
    BOOL _isOpen;
    NSURL *_libraryPathURL;
    PFDispatchQueue *_dispatchQueue;
    PFDispatchQueue *_replyQueue;
    NSURL *_libraryPathBookmarkURL;
    NSLock *_libraryReconnectLock;
    RDDatabase *_library;
    PHLIngestController *_ingestController;
    PFCoalescer *_updateAlbumSortOrderCoalescer;
}

+ (BOOL)_writePhotoStreamLibraryVersion:(unsigned long long)arg1 forLibraryAtURL:(id)arg2;
+ (BOOL)_writePhotoStreamLibraryInfo:(id)arg1 forLibraryAtURL:(id)arg2;
+ (unsigned long long)_readPhotoSteamLibraryVersionForLibraryAtURL:(id)arg1;
+ (id)_readPhotoSteamLibraryInfoForLibraryAtURL:(id)arg1;
+ (id)_photoStreamLibraryInfoFilepathForLibraryAtURL:(id)arg1;
@property(retain) PFCoalescer *updateAlbumSortOrderCoalescer; // @synthesize updateAlbumSortOrderCoalescer=_updateAlbumSortOrderCoalescer;
@property(retain) PHLIngestController *ingestController; // @synthesize ingestController=_ingestController;
@property BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(retain) RDDatabase *library; // @synthesize library=_library;
@property(retain) NSLock *libraryReconnectLock; // @synthesize libraryReconnectLock=_libraryReconnectLock;
@property(retain) NSURL *libraryPathBookmarkURL; // @synthesize libraryPathBookmarkURL=_libraryPathBookmarkURL;
@property(retain) PFDispatchQueue *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) PFDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSURL *libraryPathURL; // @synthesize libraryPathURL=_libraryPathURL;
- (void).cxx_destruct;
- (void)updateAlbumWithLastContributionChangeDate:(id)arg1 streamIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updateAlbumWithLastInterestingChangeDate:(id)arg1 streamIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setName:(id)arg1 forAlbumWithStreamIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForAlbumWithStreamAlbum:(id)arg1 model:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createAlbumWithStreamAlbum:(id)arg1 model:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reconnectDownloadedMastersWithWorkDirectoryURL:(id)arg1;
- (void)setVersionSortOrderForAlbumWithStreamIdentifier:(id)arg1 withMediaItemIdentifiers:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForAlbumWithStreamIdentifier:(id)arg1 properties:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)mediaItemIdentifiers:(CDUnknownBlockType)arg1;
- (void)thumbnailFileBookmarkDataForMediaItemWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)masterFileBookmarkDataForMediaItemWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteVersionsWithMediaItemIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createVersionsWithAssetInfos:(id)arg1 forAlbumWithStreamIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)versionModelIdsForMediaItemIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)albumModelIdsForStreamIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)mediaItemIdentifiersForAlbumWithStreamIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteAlbumsWithStreamIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createAlbumWithStreamIdentifier:(id)arg1 properties:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)albumStreamIdentifierToPropertyMapForIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)albumStreamIdentifierToPropertyMap:(CDUnknownBlockType)arg1;
- (void)libraryURLForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)delete:(CDUnknownBlockType)arg1;
- (void)close:(CDUnknownBlockType)arg1;
- (void)open:(CDUnknownBlockType)arg1;
- (unsigned char)wellKnownClientIdentifier;
- (id)initWithLibraryPathURL:(id)arg1;
- (void)_updateAndPersistAlbumSortOrder;
- (CDUnknownBlockType)_albumSortComparator;
- (long long)_compareDate:(id)arg1 toDate:(id)arg2;
- (void)_deleteMastersForMasterIds:(id)arg1 withChangeReason:(unsigned short)arg2;
- (id)_validateAssetInfosForVersionCreation:(id)arg1;
- (id)_createAlbumWithStreamIdentifier:(id)arg1 properties:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (void)_optimizeAlbumForPropertyComparing:(id)arg1;
- (void)_optimizeAlbumForPropertyFetching:(id)arg1;
- (void)_optimizeAlbumForPropertySetting:(id)arg1;
- (id)_streamAlbumProperties:(id)arg1 model:(id)arg2;
- (id)_albumProperties:(id)arg1;
- (void)_updateAlbum:(id)arg1 withProperties:(id)arg2;
- (void)_reconnectLibraryIfNecessary;
- (void)_setupAlbumSortOrderCoalescer;

@end


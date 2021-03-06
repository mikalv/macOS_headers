//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXMondrianViewMediaSection, NSMapTable, NSMutableArray;

@interface _IPXMondrianViewMediaSectionMediaItemsCollection : NSObject
{
    IPXMondrianViewMediaSection *_mediaSection;
    NSMutableArray *_mediaItemsArray;
    NSMapTable *_itemUUIDToMediaItemArrayIndexMap;
    BOOL _itemUUIDToMediaItemArrayIndexMapIsUpToDate;
}

- (void).cxx_destruct;
- (void)updateMediaItemItems:(id)arg1;
- (id)indexesForItemsFoundInMutableSet:(id)arg1 removeMatches:(BOOL)arg2;
- (id)indexesForMediaItemsFoundInMutableSet:(id)arg1 removeMatches:(BOOL)arg2;
- (long long)indexOfItem:(id)arg1;
- (void)moveMediaItemsAtIndexes:(id)arg1 toIndex:(long long)arg2;
- (void)moveMediaItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)insertMediaItems:(id)arg1 atIndexes:(id)arg2;
- (id)removeMediaItemsAtIndexes:(id)arg1;
- (id)mediaItemAtIndex:(long long)arg1;
- (void)rebuildIndexesIfNecessary;
- (void)rebuildIndexes;
- (void)updateCollectionForSparseMediaItems;
- (id)_mediaSectionSparseCollection;
- (long long)count;
- (void)dealloc;
- (id)initWithMediaItems:(id)arg1 mediaSection:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Item.h"

@interface FileItem : Item
{
    unsigned long long _sizeInBytes;
}

+ (id)dummyItem;
@property(nonatomic) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
- (void)acceptVisitor:(id)arg1;
- (void)sortChildItemsBySizeNonRecursively;
- (void)sortChildItemsBySizeRecursively;
- (id)topmostDirectory;
- (id)childItems;
- (unsigned long long)originalSizeInBytes;
- (unsigned long long)originalSizeInLinks;
- (BOOL)deserializeOnlyIsDeletedFlags:(id)arg1;
- (BOOL)serializeOnlyIsDeletedFlags:(id)arg1;
- (unsigned long long)calculateSerializationLengthOnlyIsDeletedFlags;
- (BOOL)deserializeOnlyNames:(id)arg1;
- (BOOL)serializeOnlyNames:(id)arg1;
- (unsigned long long)calculateSerializationLengthOnlyNames;
- (BOOL)deserializeFull:(id)arg1 basePath:(const char *)arg2 basePathLength:(unsigned long long)arg3 hardLinks:(id)arg4 excludeFromHardLinks:(BOOL)arg5 calculateIfNoHardLinks:(BOOL)arg6;
- (BOOL)serializeFull:(id)arg1;
- (unsigned long long)calculateSerializationLengthFull;

@end


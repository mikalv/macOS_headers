//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffers/PBGeneratedMessage.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CHFileGroups : PBGeneratedMessage
{
    unsigned int hasVerbosityLevel_:1;
    unsigned int verbosityLevel;
    NSMutableArray *fileGroupsArray;
    NSMutableArray *fileErrorArray;
    NSMutableArray *fileChunkErrorArray;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property unsigned int verbosityLevel; // @synthesize verbosityLevel;
@property(retain) NSMutableArray *fileChunkErrorArray; // @synthesize fileChunkErrorArray;
@property(retain) NSMutableArray *fileErrorArray; // @synthesize fileErrorArray;
@property(retain) NSMutableArray *fileGroupsArray; // @synthesize fileGroupsArray;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)fileChunkErrorAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *fileChunkError; // @dynamic fileChunkError;
- (id)fileErrorAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *fileError; // @dynamic fileError;
- (id)fileGroupsAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *fileGroups; // @dynamic fileGroups;
- (id)defaultInstance;
- (id)init;
- (void)setHasVerbosityLevel:(BOOL)arg1;
- (BOOL)hasVerbosityLevel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class MDLMesh, NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec
{
}

+ (id)fetchRequest;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

// Remaining properties
@property(retain, nonatomic) MDLMesh *mesh; // @dynamic mesh;
@property(retain, nonatomic) NSOrderedSet *submeshes; // @dynamic submeshes;

@end


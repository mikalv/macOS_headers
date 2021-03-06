//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VolumeFormatsHelper : NSObject
{
    NSArray *_personalityArray;
}

+ (id)defaultLayoutSchemeForPersonality:(id)arg1;
+ (BOOL)personality:(id)arg1 supportsScheme:(id)arg2;
+ (id)sharedInstance;
@property(copy) NSArray *personalityArray; // @synthesize personalityArray=_personalityArray;
- (id)personalityFromDescription:(id)arg1;
- (id)personalityFromKey:(id)arg1;
- (id)keyFromDescription:(id)arg1;
- (id)descriptionFromKey:(id)arg1;
- (id)allDescriptions;
- (void)dealloc;
- (id)init;
- (id)getEverythingElse:(id)arg1;
- (id)getDictionaryForFilesystem:(id)arg1 fromList:(id)arg2;
- (id)getWriteableFileSystemsArray;

@end


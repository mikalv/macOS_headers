//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSStoryboardPrivateData : NSObject
{
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSDictionary *identifierToExternalStoryboardReferenceMap;
    NSDictionary *identifierToUUIDMap;
    NSString *designatedEntryPointIdentifier;
    NSMutableDictionary *identifierToUINibMap;
    NSString *mainMenu;
    NSArray *topLevelObjects;
    NSBundle *ownerBundle;
}

- (void)dealloc;

@end


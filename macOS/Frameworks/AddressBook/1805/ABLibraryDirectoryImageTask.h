//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABTask.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABLibraryDirectoryImageTask : ABTask
{
    NSArray *_emailAddresses;
}

+ (void)_cacheAvailableLibraryImagesPeopleFolders;
- (id)run:(id *)arg1;
- (void)dealloc;
- (id)initWithEmailAddresses:(id)arg1;

@end

